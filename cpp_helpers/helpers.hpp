#pragma once

#ifndef LEETCODE_GRINDING_HELPERS
#define LEETCODE_GRINDING_HELPERS

#include <iostream>
#include <print>
#include <format>

#include <algorithm>
#include <numeric>

#include <iterator>
#include <ranges>

#include <array>
#include <vector>

#include <forward_list>
#include <list>

#include <initializer_list>

#include <string>
#include <string_view>

#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <queue>
#include <deque>
#include <stack>

using std::string, std::string_view,
    std::cout, std::cin, std::format, std::print, std::println, 
    std::array, std::vector,
    std::forward_list, std::list, std::initializer_list,
    std::stack, std::queue, std::priority_queue, std::deque,
    std::map, std::multimap,
    std::unordered_map, std::unordered_multimap,
    std::set, std::multiset, 
    std::unordered_set, std::unordered_multiset,
    std::pair, std::tuple;

template <typename Container>
requires std::ranges::range<Container>
void print_container(const Container& c) {

    print("[");    
    // cout << "[";

    auto it = c.begin();
    if (it != c.end()) 
        print("{}", *(it++));
    for (; it != c.end(); ++it)
        print (", {}", *(it));

    cout << "]\n";
}

#endif