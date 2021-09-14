class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        return check_Symmetric(root->left,root->right);
        
    }
    bool check_Symmetric(TreeNode* subleft,TreeNode* subright)
    {
        if(subleft==NULL&&subright==NULL)
            return true;
        if(subleft==NULL||subright==NULL)
            return false;
        if(subleft->val!=subright->val)
            return false;
        return check_Symmetric(subleft->left,subright->right) && check_Symmetric(subleft->right,subright->left);
    }
};
