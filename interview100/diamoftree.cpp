#include <algorithm> 
#include <climits>
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
int helper(TreeNode* root,int &height){
    if(root==nullptr)return 0;
    int left=helper(root->left,height);
    int right=helper(root->right,height);
    height=max(height,left+right);
    return 1+max(left,right);
}
    int diameterOfBinaryTree(TreeNode* root) {
        int height=INT_MIN;
        helper(root,height);
        return height;
    }
};