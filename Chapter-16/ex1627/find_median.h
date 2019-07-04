// header file utlities.h
#ifndef FIND_MEDIAN_H // header gaurd (Section 2.9.2, p. 69)
#define FIND_MEDIAN_H
#include <vector>
template <class T>
typename std::vector<T>::const_iterator find_median(const std::vector<T>&);
#include "find_median.cc" // get the definitions for find_median etc.
#endif
