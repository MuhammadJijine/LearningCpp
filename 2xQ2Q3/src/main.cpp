#include "../include/io.h"

int main() {
    int x;
    int y;
    x = readNumber();
    y = readNumber();
    writeNumber(x+y);
    return 0;
}