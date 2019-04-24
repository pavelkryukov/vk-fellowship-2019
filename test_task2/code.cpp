/* Copyright (C) 2019 Pavel I. Kryukov */

#include <iostream>
#include <string>

bool is_square( const std::string& s)
{
    auto size = s.size();
    if (size % 2 != 0)
        return false;

    auto half_size = size / 2;
    for (size_t i = 0; i < half_size; ++i)
        if (s[i] != s[half_size + i])
            return false;

    return true;
}

#ifndef UNIT_TESTS

int main()
{
    std::string data;
    std::cin >> data;
    std::cout << (is_square(data) ? "Yes" : "No") << std::endl;
    return 0;
}

#endif
