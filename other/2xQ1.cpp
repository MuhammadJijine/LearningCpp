#include <iostream>

using namespace std;

int readNumber ()
{
    int x;
    cout << "Enter Num : ";
    cin >> x;
    return x;
}
void writeNumber(int num)
{
    cout << "The sum is : " << num;
}
int main()
{
    int x;
    int y;
    x = readNumber();
    y = readNumber();
    writeNumber (x+y);
    return 0;
}