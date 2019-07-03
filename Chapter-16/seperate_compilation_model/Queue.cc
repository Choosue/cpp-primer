export template <class Type> class Queue;
#include "Queue.h"

/*
 * g++ -Wall -Werror -Wextra -pedantic -std=c++17 -g -fsanitize=address   -c -o Queue.o Queue.cc
 * Queue.cc:1:1: error: exported templates are unsupported [-Werror]
 * export template <class Type> class Queue;
 * ^
 * 1 error generated.
 * make: *** [Queue.o] Error 1
 */