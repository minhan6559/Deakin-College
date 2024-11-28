#include "splashkit.h"

// Khai báo - Declaration
void say_hello();
int add(int, int);
double add_half(double);
void add_one(double);

// Hàm - Function
int main()
{
    // In ra hello world
    say_hello();

    // Cộng 2 số nguyên
    int x = add(5, 3);
    write_line(x);

    x = add_half(5.5);
    write_line(x);

    // Cộng thêm 1
    int a = 8;
    add_one(a);
    write_line(a);
    return 0;
}

// Cài đặt - Implementation
void say_hello() // Procedure (Hàm không trả về giá trị)
{
    write_line("Hello World!");
}

// Type -> Name -> Parameters (Tham số, Input) -> Return Value (Giá trị trả về, Output)
int add(int a, int b)
{
    int c = a + b;
    return c; // Return value (Giá trị trả về)
}

// Hàm để cộng thêm 0.5 cho 1 số thực
double add_half(double a)
{
    // double c = a + 0.5;
    // return c;

    return a + 0.5;
}

void add_one(double a)
{
    a = a + 1;
}