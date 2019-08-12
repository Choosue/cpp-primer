CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=c++17 -g -fsanitize=address
LDFLAGS =  -fsanitize=address

%: %.o
	$(CXX) $(LDFLAGS) -o $@ $< $(LBLIBS)

EXES = $(shell find . -perm +111 -type f)

clean:
	rm -rf *.dSYM
	rm -rf $(EXES)