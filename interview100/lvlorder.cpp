#include<vector>
#include<queue>
using namespace std;

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
   vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>> ans;
        if (!root) return ans; 

        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            int s = q.size();
            vector<int> sans;
            for (int i = 0; i < s; i++) {
                TreeNode* t = q.front();
                q.pop();
                sans.push_back(t->val);
                
                if (t->left) q.push(t->left);
                if (t->right) q.push(t->right);
            }
            ans.push_back(sans);
        }
        return ans;
    }
};
