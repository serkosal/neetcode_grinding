#include "cpp_helpers/helpers.hpp"
#include "cpp_helpers/treeNode.hpp"

TreeNode* invertTree(TreeNode* const root) {

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        if (!cur) continue;

        std::swap(cur->left, cur->right);
        q.push(cur->left); q.push(cur->right);
    };

    return root;
}

int main() {

    auto root = new TreeNode{0, 
        new TreeNode{1,
            new TreeNode{3},
            new TreeNode{4}, 
        }, 
        new TreeNode{2,
            new TreeNode{5}
        }
    };
    invertTree(root);

    cout << *root;

    return 0;
}