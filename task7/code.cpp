/* Copyright (C) 2019 Pavel I. Kryukov */
// 3 4 2 3 1
#include <algorithm>
#include <iostream>
#include <deque>
#include <map>
#include <bitset>
#include <iterator>

int main()
{
    std::map<int, std::bitset<10005>> staff;
    int president;
    std::cin >> president;
    int boss = president;
    staff[president][president] = false;
    int name;

    while (std::cin >> name) {
        if (name == president) {
            boss = president;
            continue;
        }
        staff[boss][name] = true;
        staff[name][name] = false;
        boss = name;
    }

    for (const auto& e: staff) {
        for (size_t i = 0; i < 10005; ++i)
            if (e.second[i])
                std::cout << i << ' ';

        std::cout << '0' << std::endl;
    }
       
    return 0;
}

