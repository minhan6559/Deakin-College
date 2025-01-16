// Library
#include "splashkit.h"
#include <vector>
using std::vector;

void print_vector(vector<int> numbers)
{
    for (int i = 0; i < numbers.size(); i++)
    {
        write(numbers[i]);
        write(" ");
    }

    write_line("");
}

int main()
{
    // Vector - Mảng (Có số lượng phần tử linh hoạt)
    vector<int> numbers;
    print_vector(numbers);

    // push_back() - Thêm phần tử vào cuối mảng
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(88);

    print_vector(numbers);

    // size() - Lấy số lượng phần tử
    write_line(int(numbers.size()));

    // index - vị trí chỉ được phép từ 0 đến (size - 1)
    write_line(numbers[1]);

    // pop_back() - Xóa phần tử cuối mảng
    numbers.pop_back();

    print_vector(numbers);

    // back() - Lấy phần tử cuối mảng
    write_line(numbers.back());
    print_vector(numbers);
    return 0;
}