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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==nullptr)return ans;
     queue<TreeNode*>q;
     q.push(root);
     bool lefttoright=1;
     while(!q.empty()){
        int s=q.size();
        vector<int>row(s);
        for(int i=0;i<s;i++){
            TreeNode* tr=q.front();
            q.pop();
            int id=lefttoright?i:s-i-1;
            row[id]=tr->val;
            if(tr->left)q.push(tr->left);
            if(tr->right)q.push(tr->right);
        }
        ans.push_back(row);
        lefttoright=!lefttoright;
     }
 return ans;
    }
};