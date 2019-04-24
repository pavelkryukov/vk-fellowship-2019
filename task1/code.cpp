/* Copyright (C) 2019 Pavel I. Kryukov */

#include <iostream>

int square(int p, int k)
{
    auto a = p / (2 * (1 + k));
    return a * a * k;
}

#ifndef UNIT_TESTS

int main()
{
    int p, k;
    std::cin >> p >> k;
    std::cout << square(p, k) << std::endl;
    return 0;
}

#endif
