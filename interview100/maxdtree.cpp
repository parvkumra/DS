#include <algorithm>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
using namespace std;
class Solution {
public:
    int helper(TreeNode* root) {
        if (root == nullptr) return 0;

       
        int leftDepth = helper(root->left);
        int rightDepth = helper(root->right);

        return 1 + max(leftDepth, rightDepth);
    }

    int maxDepth(TreeNode* root) {
        return helper(root);
    }
};
