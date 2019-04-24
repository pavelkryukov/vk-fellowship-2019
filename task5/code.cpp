/* Copyright (C) 2019 Pavel I. Kryukov */

#include <iostream>

std::size_t get_level(unsigned x)
{    
    for (size_t i = 0; i < sizeof(unsigned) * 8; ++i) {
        if (x == 0)
            return i - 1;
        x >>= 1;
    }
    return 0;
}

int ancestor(int a, int b)
{
    auto a_level = get_level(a);
    auto b_level = get_level(b);
    auto min_level = std::min(a_level, b_level);
    for (size_t i = min_level; i < a_level; ++i)
        a /= 2;
    for (size_t i = min_level; i < b_level; ++i)
        b /= 2;
    while (a != b) {
        a /= 2;
        b /= 2;
    }
    return a;
}

#ifndef UNIT_TESTS

int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << ancestor(a, b) << std::endl;
    return 0;
}

#endif
