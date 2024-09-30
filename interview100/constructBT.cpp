
class Solution {
public:
TreeNode* helper(vector<int>& preorder, vector<int>& inorder,int start,int end,int& idx){
    if(start>end)return nullptr;
    TreeNode* root=new TreeNode(preorder[idx]);
   int index=0;
   for(index=0;index<inorder.size();index++){
    if(inorder[index]==preorder[idx])break;
   }
   idx++;
   root->left=helper(preorder,inorder,start,index-1,idx);
   root->right=helper(preorder,inorder,index+1,end,idx);
   return root;

}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       int n=inorder.size();
       int idx=0;
       return helper(preorder,inorder,0,n-1,idx); 
    }
};