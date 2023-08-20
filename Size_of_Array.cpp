// Size_of_Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include <functional>
#include <iterator>
template<typename T, size_t N>

void func(const T(&arr)[N]) { std::cout << sizeof(arr); }

int main()
{
    int arr[6] = { 1, 2, 3, 4, 5, 6 };

    func(arr);

    return 0;
};
