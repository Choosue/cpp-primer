#include "text_query_vector.h"
#include <sstream>

std::vector<TextQuery::line_no> TextQuery::run_query(const std::string& word) const
{
    typedef std::map< std::string, std::vector<line_no> >::const_iterator map_it;
    map_it it = word_map.find(word);
    if (it != word_map.end()) {
        return it->second;
    }
    return std::vector<line_no>();
}

std::string TextQuery::text_line(line_no line_num) const
{
    if (line_num > lines_of_text.size()) {
        throw std::out_of_range("line number out of range");
    }
    return lines_of_text[line_num];
}

void TextQuery::store_file(std::ifstream& in)
{
    std::string line;
    while (std::getline(in, line)) {
        lines_of_text.push_back(line);
    }
}

void TextQuery::build_map()
{
    for (line_no i = 0; i != lines_of_text.size(); ++i) {
        std::string word;
        std::istringstream is(lines_of_text[i]);
        while (is >> word) {
            if (!word_map[word].empty()) {
                line_no last = *(word_map[word].end() - 1);
                if (last != i) {
                    word_map[word].push_back(i);
                }
            } else {
                word_map[word].push_back(i);
            }
        }
    }
}