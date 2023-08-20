// Lambda_func_for_List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include <algorithm>

int main()
{
    std::list<int> m_list{ 14, 129, 35, 293, 25, 156, 45, 200 };

    std::for_each(m_list.begin(), m_list.end(), [](int val)
        { (val > 100 && val < 200) ? std::cout << val << ",  " : std::cout << "";  });

    std::cout << std::endl;

    return 0;
}
