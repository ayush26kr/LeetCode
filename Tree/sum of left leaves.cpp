class Solution {
public:
    bool isLeaf(TreeNode* node){
        if(node==NULL)
            return false;
        if(node->left==NULL && node->right==NULL)
            return true;
        return false;
    }
        
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL)
            return 0;
        int sum=0;
        if(root!=NULL){
        if(isLeaf(root->left)){
            sum+=root->left->val;
        }
        else
            sum+=sumOfLeftLeaves(root->left);
        sum+=sumOfLeftLeaves(root->right);
        }
        return sum;
    }
};
