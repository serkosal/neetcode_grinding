#include "cpp_helpers/helpers.hpp"
#include "cpp_helpers/treeNode.hpp"

int main() {

    TreeNode root(0, 
        new TreeNode{1,
            new TreeNode{3},
            new TreeNode{4}, 
        }, 
        new TreeNode{2,
            new TreeNode{5}
        }
    );

    cout << root;

    return 0;
}