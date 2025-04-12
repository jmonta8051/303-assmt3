// NAME: Jackson Montaigne
// DATE: 4-12-2024
// PROJECT: Queue and Sorting
// DESCRIPTION: Check README for information.

#include "Functions.h"

int main()
{
    //      LINKED LIST QUEUE
    
    // Queue<int> temp;

    // temp.push(1);
    // temp.push(2);
    // temp.push(3);
    // temp.push(4);
    // temp.push(5);
    // temp.push(6);
    // temp.push(7);
    // temp.push(8);
    // temp.push(9);
    // temp.push(10);

    // temp.print();

    // std::cout 
    //     << temp.pop()->data << " " 
    //     << temp.pop()->data << "\n";

    // temp.print();

    // temp.move_to_rear();    temp.move_to_rear();

    // temp.print();

    //      REVERSE RECURSIVE VECTOR SEARCH
    
    // std::vector<int> data = { 1, 2, 3, 7, 5, 6, 7, 8, 9 };
    // int target = 7;

    // std::cout << "Item found last at index: " << linear_search(data, target, data.size() - 1) << "\n\n";

    //      LINKED LIST QUEUE INSERTION SORT

    std::list<int> numbers;

    numbers.push_back(8);
    numbers.push_back(6);
    numbers.push_back(7);
    numbers.push_back(3);
    numbers.push_back(9);
    numbers.push_back(2);

    insertion_sort(numbers);


}