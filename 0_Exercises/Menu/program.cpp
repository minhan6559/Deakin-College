#include "splashkit.h"
#include <iostream>
using namespace std;

string read_string(string);
int read_integer(string);
void display_menu();

int main()
{
    int choice;

    do
    {
        display_menu();
        choice = read_integer("Enter choice: ");

        switch (choice)
        {
        case 1:
            cout << "Minh An" << endl;
            break;
        case 2:
            cout << "Dang Ly" << endl;
            break;
        case 3:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 3);

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