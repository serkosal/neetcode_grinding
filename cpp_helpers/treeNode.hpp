#pragma once

#ifndef LEETCODE_GRINDING_LIST_NODE
#define LEETCODE_GRINDING_LIST_NODE

#include <ostream>
#include <initializer_list>

struct TreeNode {
    int val = 0;
    TreeNode* left, *right;

    TreeNode() = default;

    TreeNode(int val = 0, TreeNode* left = nullptr, TreeNode* right = nullptr) 
    : val(val), left(left), right(right) {}

    // TreeNode(int val = 0, TreeNode& left, TreeNode& right)
    // : val(val), left(&left), right(&right) {}

    std::string to_str() const;
};

std::ostream& operator<<(std::ostream& out, const TreeNode& node);

#endif