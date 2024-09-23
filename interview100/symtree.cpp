
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
bool helper(TreeNode* lefti,TreeNode* righti){
    if(!lefti)return righti==lefti;
    if(!righti)return lefti==righti;
    bool val=lefti->val==righti->val;
    bool one=helper(lefti->left,righti->right);
    bool two=helper(lefti->right,righti->left);
    return val && one && two;
}
    bool isSymmetric(TreeNode* root) {
        return helper(root->left,root->right);
    }
};