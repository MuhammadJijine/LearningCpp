#include "../include/io.h"
#include <iostream>

int readNumber()
{
    int x;
    std::cout << "Enter Num : ";
    std::cin >> x;
    return x;
}
void writeNumber(int num)
{
    std::cout << "The sum is : " << num;
}