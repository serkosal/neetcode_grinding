#include "treeNode.hpp"

#include "helpers.hpp"

using std::ostream, std::to_string;

std::ostream& operator<<(std::ostream& out, const TreeNode& node) {
    return out << node.to_str();
}

string TreeNode::to_str(int depth) const {

    const string TAB_SYMBOL = "  ";

    const string
        val_str =  to_string(this->val),
        left_str  = (left ?  '\n' + left->to_str(depth + 1) + '\n' : "null\n"),
        right_str = (right ? '\n' + right->to_str(depth + 1) + '\n': "null\n");

    string tabs;
    for (int i = 0; i < depth; ++i) 
        tabs += TAB_SYMBOL;

    return tabs + 
    "{\n" +
        tabs + TAB_SYMBOL + "\"type\": "   + "\"Tree node\"\n"  + 
        tabs + TAB_SYMBOL + "\"value\": "  + val_str         +  '\n' +
        tabs + TAB_SYMBOL + "\"left\": "   + left_str  +
        tabs + TAB_SYMBOL + "\"right\": "  + right_str + 
        tabs + 
    "}";
}