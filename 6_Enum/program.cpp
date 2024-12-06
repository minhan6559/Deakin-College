#include "splashkit.h"
#include <iostream>
using namespace std;

string read_string(string);
int read_integer(string);
void display_menu();

enum MenuChoice
{
    MINH_AN_OPTION, // 0
    DANG_LY_OPTION, // 1
    EXIT_OPTION     // 2
};

int main()
{
    int choice;

    do
    {
        display_menu();
        choice = read_integer("Enter choice: ");
        choice = static_cast<MenuChoice>(choice - 1);

        switch (choice)
        {
        case MINH_AN_OPTION:
            cout << "Minh An" << endl;
            break;
        case DANG_LY_OPTION:
            cout << "Dang Ly" << endl;
            break;
        case EXIT_OPTION:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != EXIT_OPTION);

    return 0;
}

void display_menu()
{
    cout << "\nMain Menu:" << endl;
    cout << "1. In ra Minh An" << endl;
    cout << "2. In ra Dang Ly" << endl;
    cout << "3. Exit" << endl;
}

string read_string(string prompt)
{
    string result;
    write(prompt);
    result = read_line();
    return result;
}

int read_integer(string prompt)
{
    string line = read_string(prompt);
    return convert_to_integer(line);
}