class Solution {
public:
    int diameter=0;
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return diameter;
    }
    private:
    int height(TreeNode* Node){
        if(Node==NULL)
            return 0;
        int leftHeight=height(Node->left);
        int rightHeight=height(Node->right);
        diameter=max(diameter,leftHeight+rightHeight);
        return 1+max(leftHeight,rightHeight);
    }
};
