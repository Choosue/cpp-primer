#include <vector>

template <class T>
typename std::vector<T>::const_iterator
find_median(const std::vector<T>& vec)
{
    int larger_count = 0;
    int smaller_count = 0;
    typename std::vector<T>::const_iterator cand; // candidate
    typename std::vector<T>::const_iterator iter;

    for (cand = vec.begin(); cand != vec.end(); ++cand) {
        for (iter = vec.begin(); iter != vec.end(); ++iter) {
            if (*cand > *iter) {
                larger_count++;
            } else if (*cand < *iter) {
                smaller_count++;
            }
        }
        
        if (larger_count == smaller_count) {
            return cand;
        }
        
        larger_count = 0; // reset for next candidate
        smaller_count = 0;
    }
    
    return vec.end();
}