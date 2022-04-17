class Solution {
public:
    TreeNode* ans = NULL, *tmp = NULL;
    void fun_inorder(TreeNode* root){
        if(!root)return;
        fun_inorder(root->left);
        if(!ans){
            ans = new TreeNode(root->val);
            tmp = ans;
        }
        else{
            tmp->right = new TreeNode(root->val);
            tmp = tmp->right;
        }
        fun_inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
         fun_inorder(root);
         return ans;
    }
};
