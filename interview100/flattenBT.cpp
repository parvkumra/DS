class Solution {
public:
    void flatten(TreeNode* root) {
        if(root==nullptr)return ;

        TreeNode* leftTemp=root->left;
        TreeNode* rightTemp=root->right;
        root->left=nullptr;
        flatten(leftTemp);
        flatten(rightTemp);
        root->right=leftTemp;
        TreeNode* curr=root;
        while(curr->right!=nullptr){
            curr=curr->right;
        }
        curr->right=rightTemp;
    }
};