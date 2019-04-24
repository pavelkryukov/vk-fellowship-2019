/* Copyright (C) 2019 Pavel I. Kryukov */

#include <iostream>
#include <deque>

std::deque<int> encode(const std::deque<int>& input)
{
    std::deque<int> results;
    int last_number = input[0];
    int occurences = 1;
    for (size_t i = 1; i < input.size(); ++i) {
        if (input[i] == last_number) {
            occurences++;
        }
        else {
            results.emplace_back(occurences);
            results.emplace_back(last_number);
            last_number = input[i];
            occurences = 1;
        }
    }
    results.emplace_back(occurences);
    results.emplace_back(last_number);
    return results;
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
    
    auto res = encode(input);
    auto size_out = res.size();
    for (size_t i = 0; i < size_out - 1; ++i)
        std::cout << res[i] << ' ';
    std::cout << res[size_out - 1] << std::endl;
    return 0;
}

#endif
