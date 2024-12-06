#include "splashkit.h"
#include <iostream>
#include <string>
using namespace std;

string read_string(string);
int read_integer(string);
double read_double(string);

// Kiểu dữ liệu tuỳ biến
struct Person
{
    int age;
    string name;
    string address;
    double height;
};

Person read_person()
{
    Person result;
    result.age = read_integer("Enter age: ");
    result.name = read_string("Enter name: ");
    result.address = read_string("Enter address: ");
    result.height = read_integer("Enter height: ");
    cout << endl;
    return result;
}

void write_person(const Person &p)
{
    cout << "Age: " << p.age << endl;
    cout << "Name: " << p.name << endl;
    cout << "Address: " << p.address << endl;
    cout << "Height: " << p.height << endl;
    cout << endl;
}

// Pass by reference (Truyền tham chiếu)
void change_age_ref(Person &p)
{
    p.age = 30;
}

// Pass by value (Truyền tham trị)
void change_age_value(Person p)
{
    p.age = 30;
}

int main()
{
    // An
    // Không dùng struct
    int age_an = 20;
    string name_an = "An";
    string address_an = "Nha Trang";
    double height_an = 1.7;

    // Dùng struct
    Person an;
    an.age = 20;
    an.name = "An";
    an.address = "Nha Trang";
    an.height = 1.7;

    // Dang
    Person dang = read_person();
    write_person(dang);

    cout << "Change age by value" << endl;
    change_age_value(dang);
    write_person(dang);

    cout << "Change age by reference" << endl;
    change_age_ref(dang);
    write_person(dang);

    return 0;
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

double read_double(string prompt)
{
    string line = read_string(prompt);
    return convert_to_double(line);
}