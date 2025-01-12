#include "splashkit.h"
#include <string>
using namespace std;

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

int total_length(string data[], int size)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total = total + data[i].length();
    }

    return total;
}

string shortest_name(string data[], int size)
{
    string shortest = data[0];

    for (int i = 0; i < size; i++)
    {
        if (data[i].length() < shortest.length())
        {
            shortest = data[i];
        }
    }

    return shortest;
}

bool contains(string value, string data[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (data[i] == value)
        {
            return true;
        }
    }

    return false;
}

int index_of(string value, string data[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (data[i] == value)
        {
            return i;
        }
    }

    return -1;
}

void print_summary(string data[], int size)
{
    write_line("Names in the array:");
    for (int i = 0; i < size; i++)
    {
        write_line(data[i]);
    }

    write_line("Total Length: " + to_string(total_length(data, size)));

    string my_name = "Dang";
    write_line("Index of my name: " + to_string(index_of(my_name, data, size)));

    write_line("Shortest name: " + shortest_name(data, size));
}

int main()
{
    const int SIZE = 5;
    string names[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        names[i] = read_string("Enter a name: ");
    }

    print_summary(names, SIZE);
    return 0;
}