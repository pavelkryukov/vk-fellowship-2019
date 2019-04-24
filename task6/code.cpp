/* Copyright (C) 2019 Pavel I. Kryukov */

#include <iostream>
#include <deque>

int courier(const std::deque<int>& weights)
{
    std::size_t w100 = 0;
    std::size_t w50 = 0;
    for (const auto& e : weights)
        if (e == 100)
            w100++;
        else
            w50++;

    if (w100 >= w50)
        return w100;

    auto remaining = w50 - w100;
    if (remaining % 3 == 0)
        return w100 + remaining / 3;
    return w100 + remaining / 3 + 1;
}

#ifndef UNIT_TESTS

int main()
{
    std::size_t size;
    std::cin >> size;

    std::deque<int> input;
    for (std::size_t i = 0; i < size; ++i) {
        int num;
        std::cin >> num;
        input.emplace_back(num);
    }
    
    std::cout << courier(input) << std::endl;
    return 0;
}

#endif
