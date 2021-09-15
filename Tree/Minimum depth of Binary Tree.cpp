class Solution {
public:
   
    int minDepth(TreeNode* root) {
        
        int l=INT_MAX;
        int r=INT_MAX;
        if(root==NULL)
            return 0;
        if(root->left==NULL && root->right==NULL)
            return 1;
        if(root->left)
            l=minDepth(root->left);
        if(root->right)
            r=minDepth(root->right);
        return min(l,r)+1;
        
    }
};
