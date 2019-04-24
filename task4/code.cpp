/* Copyright (C) 2019 Pavel I. Kryukov */

#include <iostream>
#include <string>
#include <string_view>

std::string_view get_sentence(const std::string& input, std::size_t num)
{
    auto size = input.size();
    std::size_t current_sentence = 1;
    std::size_t start_pos = 0;
    bool prev_was_point = true;
    for (size_t i = 0; i < size; ++i) {
        bool is_point = (input[i] == '.');
        if (is_point) {
            prev_was_point = true;
        }
        else if (!is_point && prev_was_point) {
            prev_was_point = false;
            if (current_sentence == num) {
                start_pos = i;
                break;
            }
            current_sentence++;
        }
    }
    std::size_t subsize = 0;
    for (size_t i = start_pos; i < size; ++i) {
        if (input[i] != '.')
            continue;
        if (i == size - 1 || input[i + 1] != '.')
            subsize = i - start_pos + 1;
        else
            subsize = i - start_pos + 3;
        break;
    }
    return std::string_view(input.c_str() + start_pos, subsize);
}

#ifndef UNIT_TESTS

int main()
{
    std::size_t num;
    std::string input;
    std::cin >> num;
    std::cin >> input;
    std::cout << get_sentence(input, num) << std::endl;
    return 0;
}

#endif
