#include "splashkit.h"
#include <string>
#include <vector>
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

int total_length(const vector<string> &data)
{
    int total = 0;

    for (int i = 0; i < data.size(); i++)
    {
        total = total + data[i].length();
    }

    return total;
}

string shortest_name(const vector<string> &data)
{
    string shortest = data[0];

    for (int i = 0; i < data.size(); i++)
    {
        if (data[i].length() < shortest.length())
        {
            shortest = data[i];
        }
    }

    return shortest;
}

bool contains(string value, const vector<string> &data)
{
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i] == value)
        {
            return true;
        }
    }

    return false;
}

int index_of(string value, const vector<string> &data)
{
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i] == value)
        {
            return i;
        }
    }

    return -1;
}

void print_summary(const vector<string> &data)
{
    write_line("Names in the array:");
    for (int i = 0; i < data.size(); i++)
    {
        write_line(data[i]);
    }

    write_line("Total Length: " + to_string(total_length(data)));

    string my_name = "Dang";
    write_line("Index of my name: " + to_string(index_of(my_name, data)));

    write_line("Shortest name: " + shortest_name(data));
}

void print_reverse(const vector<string> &data)
{
    write_line("Names in the array in reverse order:");
    for (int i = data.size() - 1; i >= 0; i--)
    {
        write_line(data[i]);
    }
}

int main()
{
    // const int SIZE = 5; Constant - Hằng số = Những số không thay đổi
    int size = read_integer("Enter the number of names: ");

    vector<string> names;

    for (int i = 0; i < size; i++)
    {
        string name = read_string("Enter a name: ");
        names.push_back(name);
    }

    print_summary(names);
    print_reverse(names);
    return 0;
}