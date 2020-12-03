#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > tmp;
    for(auto it = people.rbegin(); it!=people.rend(); --it)
    {
        it->birthday();
        if(it->isMonster()) tmp.push_back("n");
        else tmp.push_back("y");
    }
    return tmp;
}
