#include <iostream>
#include <vector>
#include <algorithm>

int IntCompare(const void* left, const void* right)
{
    int lhs = *static_cast<const int*>(left);
    int rhs = *static_cast<const int*>(right);

    if (lhs > rhs)
    {
        return -1;
    }
    else if (lhs < rhs)
    {
        return 1;
    }

    return 0;
}

int main()
{
    std::vector<int> v{ 4, 2, 3, 1, 5, 7, 6 };

    qsort(v.data(), v.size(), sizeof(v[0]), IntCompare);

    for (int value : v)
    {
        std::cout << value << " ";
    }

    std::cout << std::endl;

    std::vector<int> v1{ 1, 3, 2, 5, 4 };

    qsort(v1.data(), v1.size(), sizeof(v1[0]), [](const void* a, const void* b) {
        return *static_cast<const int*>(a) - *static_cast<const int*>(b);
    });

    for (int value : v1)
    {
        std::cout << value << " ";
    }

    std::cout << std::endl;

    std::for_each(v1.begin(), v1.end(), [](const int& val) {
        std::cout << val << " ";
    });
}