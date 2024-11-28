#include "splashkit.h"

int main()
{
    // Vòng lặp - Loop

    // While loop
    write_line("While loop");
    int i = 0;

    while (i <= 5)
    {
        write_line(i);
        i = i + 1;
    }

    // Do While loop
    write_line("\nDo While loop");
    int j = 1;

    do
    {
        write_line(j);
        j = j + 1;
    } while (j <= 7);

    return 0;
}