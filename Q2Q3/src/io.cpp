#include "../include/io.h"

int readNumber()
{
    int x;
    std::cout << "Enter Num : ";
    std::cin >> x;
    return x;
}

void writeNumber (int num) 
{
    std::cout << "The sum is : " << num << std::endl; 
}