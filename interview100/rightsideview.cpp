/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root==nullptr)return ans;
        queue<TreeNode*>q;
        q.push(root);
 
        while(!q.empty()){
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode* tr=q.front();
                q.pop();
                if(tr->left)q.push(tr->left);
                if(tr->right)q.push(tr->right);
                if(i==s-1)ans.push_back(tr->val);
            }
        }
        return ans;
    }
};