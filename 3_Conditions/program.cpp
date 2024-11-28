#include "splashkit.h"

int main()
{
    // Boolean - False/True - 0/1
    write_line(1 > 2);
    write_line(1 < 2);
    write_line(1 == 2);

    // If else
    int a = 1;
    if (a > 2)
    {
        write_line("Minh An");
    }
    else if (a < 2)
    {
        write_line("Viet Nam");
    }
    else
    {
        write_line("Dang Ly");
    }

    // Switch case
    int x = 5;

    switch (x)
    {
    case 1:
        write_line("Case 1");
        break;
    case 2:
        write_line("Case 2");
        break;
    case 3:
        write_line("Case 3");
        break;
    default:
        write_line("Default");
    }

    return 0;
}