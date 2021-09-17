class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)
            return NULL;
        if(root->val==p->val||root->val==q->val)
            return root;
        TreeNode* leftLCA=lowestCommonAncestor(root->left,p,q);
        TreeNode* rightLCA=lowestCommonAncestor(root->right,p,q);
        
        if(leftLCA && rightLCA)
            return root;
        if(leftLCA!=NULL)
            return leftLCA;
        return rightLCA;
    }
};
