#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <list>

#include "Queue.h"
#include "SearchSort.cpp"

//PRE: Takes a vector of any values, the last value in the vector, and a target integer.
//POST: Returns the index of the last occurence of the target in the vector.
template <typename T>
int linear_search(std::vector<T>& items, T& target, size_t pos_last);

//PRE: Takes a C++ std library list of integers.
//POST: Sorts the list.
void insertion_sort(std::list<int> &data);