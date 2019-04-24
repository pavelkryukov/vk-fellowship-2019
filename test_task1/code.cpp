/* Copyright (C) 2019 Pavel I. Kryukov */

#include <algorithm>
#include <iostream>
#include <vector>

struct Output
{
    unsigned min = 0;
    size_t amount = 0;
};

static Output minimizer( const std::vector<unsigned>& input)
{
    Output result{};
    result.min = *std::min_element(input.begin(), input.end());
    result.amount = std::count_if(input.begin(), input.end(), [m=result.min](const auto& e){ return e % m == 0; });
    return result;
}

#ifndef UNIT_TESTS

int main()
{
    std::size_t size;
    std::cin >> size;
    std::vector<unsigned> data(size);
    for (std::size_t i = 0; i < size; ++i)
        std::cin >> data[i];
    auto result = minimizer(data);
    std::cout << result.min << ' ' << result.amount << std::endl;
    return 0;
}

#endif
