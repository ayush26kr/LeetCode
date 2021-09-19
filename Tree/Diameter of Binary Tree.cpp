class Solution {
public:
    int height(TreeNode* node){
        if(node==NULL)
            return 0;
        return 1+max(height(node->left),height(node->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        int lheight=height(root->left);
        int rheight=height(root->right);
        
        int ldiameter=diameterOfBinaryTree(root->left);
        int rdiameter=diameterOfBinaryTree(root->right);
        return max(lheight+rheight,max(ldiameter,rdiameter));   
    }
};
