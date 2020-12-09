#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
#include <algorithm>

std::vector<char> foo(std::list<Human>& a)
{
    std::vector< char > tmp;
    for (auto& e : a)
    {
        e.birthday();
        if (e.isMonster())
            tmp.emplace_back('n');
        else
            tmp.emplace_back('y');
    }
    std::reverse(tmp.begin(), tmp.end());
    return tmp;
}
