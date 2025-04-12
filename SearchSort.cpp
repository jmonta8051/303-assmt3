#include "Functions.h"

template <typename T>
int linear_search(std::vector<T>& items, T& target, size_t pos_last) 
{
    if (pos_last == -1)
        return -1;

    if (target == items[pos_last])
        return pos_last;

    else
        return linear_search(items, target, pos_last - 1);
}


void insertion_sort(std::list<int> data) 
{
    int i, j, key;
    bool insertionNeeded = false;
    for (j = 1; j < data.size(); j++) 
    {
        std::list<int>::iterator iter = data.begin() + j; //figure out why this aint workin'
        key = *(iter);
        insertionNeeded = false;
        for (i = j - 1; i >= 0; i--)
        {
            if (key < num[i]) 
            {
                num[i + 1] = num[i]; // larger values move right
                insertionNeeded = true;
            }
            else
                break;
        }
        if (insertionNeeded)
            num[i + 1] = key; //Put key into its proper location
    }
}