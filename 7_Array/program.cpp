#include "splashkit.h"

// Array - Mảng
int main()
{
    int number1;
    int number2;
    int number3;
    int number4;
    //...
    int number10;

    number1 = 1;
    number2 = 2;
    //...
    number10 = 10;

    // Array - Mảng (Có số lượng phần tử cố định)
    int numbers[10];
    int size = 10;

    // index - vị trí chỉ được phép từ 0 đến (size - 1)
    numbers[0] = 10;
    numbers[3] = 99;

    write_line(numbers[0]);
    write_line(numbers[3]);

    for (int i = 0; i < size; i++)
    {
        numbers[i] = i + 1;
    }

    for (int i = 0; i < size; i++)
    {
        write_line(numbers[i]);
    }

    return 0;
}