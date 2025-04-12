#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <list>

#include "Queue.h"
#include "SearchSort.cpp"

template <typename T>
int linear_search(std::vector<T>& items, T& target, size_t pos_first);

void insertion_sort(Queue<int> data);