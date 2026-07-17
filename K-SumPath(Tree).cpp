class Solution {
public:
    void solve(TreeNode*root,long long target,int &cnt,vector<int>path){
        if(root==NULL){
            return;
        }
        path.push_back(root->val);
        solve(root->left,target,cnt,path);
        solve(root->right,target,cnt,path);
        int size=path.size();
        long long sum=0;
        for(int i=size-1;i>=0;i--){
            sum+=path[i];
            if(sum==target){
                cnt++;
            }
            path.pop_back();
        }
        
    }
    int pathSum(TreeNode* root, long long targetSum) {
        vector<int>path;
        int cnt=0;
        solve(root,targetSum,cnt,path);
        return cnt;
    }
};
