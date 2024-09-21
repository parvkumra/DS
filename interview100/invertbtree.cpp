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
TreeNode* helper(TreeNode* root){
    if(root==nullptr)return nullptr;
   
    TreeNode* temp=root->left;
    root->left=helper(root->right);
    root->right=helper(temp);
    return root;
}
    TreeNode* invertTree(TreeNode* root) {
       return helper(root) ;
    }
};