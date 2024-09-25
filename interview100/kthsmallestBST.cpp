#include <queue>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    priority_queue<int> maxh;

    void helper(TreeNode* root, int k) {
        if (root == nullptr) return;
        maxh.push(root->val);
        if (maxh.size() > k) {
            maxh.pop();
        }
        helper(root->left, k);
        helper(root->right, k);
    }

    int kthSmallest(TreeNode* root, int k) {
        helper(root, k);
        return maxh.top();
    }
};
