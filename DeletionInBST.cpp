class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return NULL;
        }
        else if(key<root->val){
            root->left=deleteNode(root->left,key);
        }
        else if(key>root->val){
            root->right= deleteNode(root->right,key);
        }
        else{
            if(root->left== NULL && root->right==NULL){
                delete(root);
                return NULL;
            }
            else if(root->left==NULL && root->right!=NULL){
                TreeNode* temp=root->right;
                delete(root);
                return temp;
            }
            else if(root->left!=NULL && root->right==NULL){
                TreeNode* temp=root->left;
                delete (root);
                return temp;
            }
            else{
                TreeNode* successor=root->right;
                while(successor->left!=NULL){
                    successor=successor->left;
                }
                root->val=successor->val;
                root->right=deleteNode(root->right,successor->val);
                return root;
            }
        }
        return root;
    }
};
