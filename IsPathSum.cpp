class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
            return false;
        if(root->left==NULL&& root->right==NULL){
            if(targetSum==root->val){
                return true;
            }
            else{
                return false;
            }
        }
        int rem=targetSum-(root->val);
        return hasPathSum(root->left,rem)|| hasPathSum(root->right,rem);
    }
};
