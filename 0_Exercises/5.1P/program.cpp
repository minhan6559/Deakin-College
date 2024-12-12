#include "splashkit.h"
#include <iostream>
using namespace std;

struct knight_data
{
    string name;
    int age;
    string quest;
    string weapon;
};

enum knight_update_option
{
    UPDATE_NAME,   // 0
    UPDATE_AGE,    // 1
    UPDATE_QUEST,  // 2
    UPDATE_WEAPON, // 3
    EXIT_UPDATE    // 4
};

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

knight_data read_knight()
{
    knight_data result;
    result.name = read_string("Enter the knight's name: ");
    result.age = read_integer("Enter the knight's age: ");
    result.quest = read_string("Enter the knight's quest: ");
    result.weapon = read_string("Enter the knight's weapon: ");
    return result;
}

void write_knight(const knight_data &knight)
{
    write_line("\nKnight's name: " + knight.name);
    write_line("Knight's age: " + to_string(knight.age));
    write_line("Knight's quest: " + knight.quest);
    write_line("Knight's weapon: " + knight.weapon);
}

knight_update_option read_knight_update_option()
{
    write_line("\nUpdate knight's information:");
    write_line("1. Update name");
    write_line("2. Update age");
    write_line("3. Update quest");
    write_line("4. Update weapon");
    write_line("5. Exit");

    int choice = read_integer("Enter choice: ");
    return static_cast<knight_update_option>(choice - 1);
}

void update_knight(knight_data &knight)
{
    knight_update_option choice;

    do
    {
        choice = read_knight_update_option();

        switch (choice)
        {
        case UPDATE_NAME:
            knight.name = read_string("Enter the new knight's name: ");
            break;
        case UPDATE_AGE:
            knight.age = read_integer("Enter the new knight's age: ");
            break;
        case UPDATE_QUEST:
            knight.quest = read_string("Enter the new knight's quest: ");
            break;
        case UPDATE_WEAPON:
            knight.weapon = read_string("Enter the new knight's weapon: ");
            break;
        case EXIT_UPDATE:
            break;
        default:
            write_line("Invalid choice!");
        }
    } while (choice != EXIT_UPDATE);
}

int main()
{
    knight_data knight = read_knight();

    write_knight(knight);

    update_knight(knight);

    write_knight(knight);
    return 0;
}
