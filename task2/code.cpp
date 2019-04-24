/* Copyright (C) 2019 Pavel I. Kryukov */

#include <iostream>
#include <utility>

auto water(int a, int b, int c)
{
    static const int capacity = 150;
    auto total = a + b;
    auto required = c - total;
    if (a + required < capacity)
        return std::pair<int, int>{ required, 0 };
    
    auto margin_a = capacity - a;
    auto margin_b = required - margin_a;
    return std::pair<int, int>{ margin_a, margin_b };
}

#ifndef UNIT_TESTS

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    auto res = water(a, b, c);
    std::cout << res.first << ' ' << res.second << std::endl;
    return 0;
}

#endif
