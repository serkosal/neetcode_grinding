#include "treeNode.hpp"

#include "helpers.hpp"

using std::ostream, std::to_string;

std::ostream& operator<<(std::ostream& out, const TreeNode& node) {
    return out << node.to_str();
}

string TreeNode::to_str(int depth) const {

    const string TAB_SYMBOL = "  ";

    string tabs;
    for (int i = 0; i < depth; ++i) 
        tabs += TAB_SYMBOL;
    const string extra_tabs = tabs + TAB_SYMBOL;

    const string
        type_str = (depth == 0
            ? format("{}\"type\": \"Tree node\",\n", extra_tabs)
            : ""
        ),
        val_str = format("{}\"value\": {}", extra_tabs, to_string(this->val)),
        left_str  = (left 
            ? format(",\n{}\"left\": {}", extra_tabs, left->to_str(depth + 1)) 
            : ""
        ),
        right_str = (right 
            ? format(",\n{}\"right\": {}", extra_tabs, right->to_str(depth + 1))
            : ""
        );
   
    return format(
        "{{\n" 
            "{1}"
            "{2}"
            "{3}"
            "{4}"
        "\n{0}}}",
        tabs,
        type_str, val_str, left_str, right_str
    );
}