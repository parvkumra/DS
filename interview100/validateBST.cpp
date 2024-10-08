#include <climits>
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

bool helper(TreeNode* root,long minv,long maxv){
    if(root==nullptr)return true;

    if(root->val<=minv || root->val>=maxv){
        return false;
    }
    return helper(root->left,minv,root->val) && helper(root->right,root->val,maxv);
}
    bool isValidBST(TreeNode* root) {
        return helper(root,LONG_MIN,LONG_MAX);
    }
};