#include "treeNode.hpp"

#include "helpers.hpp"

using std::ostream;

std::ostream& operator<<(std::ostream& out, const TreeNode& node) {
    return out << node.to_str();
}

string TreeNode::to_str() const {
    return 
        "{ \"type\": \"Tree node\""
        ", \"value\": " + std::to_string(this->val) +
        ", \"left\": "  + (left ? left->to_str() : "null") + 
        ", \"right\": " + (right ? right->to_str() : "null") + "}";
}