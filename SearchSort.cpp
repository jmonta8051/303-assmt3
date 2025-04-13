#include "Functions.h"

template <typename T>
int linear_search(std::vector<T>& items, T& target, size_t pos_last) //Replaced all firsts with last and reversed the logic.
{
    if (pos_last == -1)
        return -1;

    if (target == items[pos_last])
        return pos_last;

    else
        return linear_search(items, target, pos_last - 1);
}


void insertion_sort(std::list<int> &data) //Basically the same just replaced all the declared integers with the dereference of the iterator that should've been there.
{
    int i, j, key;
    std::list<int>::iterator iter1, iter2, iter3;
    bool insertionNeeded = false;
    for (j = 1; j < data.size(); j++)
    {
        iter1 = data.begin();
        for (int k = 0; k < j; ++k) { ++iter1; }
        
        key = *iter1;
        insertionNeeded = false;

        for (i = j - 1; i >= 0; i--)
        {
            iter2 = data.begin(); iter3 = data.begin();
            for (int k = 0; k < i; ++k) { ++iter2; ++iter3; } 
            ++iter3;

            if (key < *iter2) 
            {
                *iter3 = *iter2; // larger values move right
                insertionNeeded = true;
            }

            else 
            {
                ++iter3;
                break;
            }
        }
        --iter3;
        if (insertionNeeded)
            *iter3 = key; //Put key into its proper location
    }
}