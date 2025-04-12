#include "Functions.h"

int main()
{
    Queue<int> temp;

    temp.push(1);
    temp.push(2);
    temp.push(3);
    temp.push(4);
    temp.push(5);
    temp.push(6);
    temp.push(7);
    temp.push(8);
    temp.push(9);
    temp.push(10);

    temp.print();

    std::cout 
        << temp.pop()->data << " " 
        << temp.pop()->data << "\n";

    temp.print();
}