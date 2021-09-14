class Solution {
public:
int height(TreeNode* node)
{
    if(node==NULL)
    return 0;
    
    return max(height(node->left),height(node->right))+1;
}

bool isBalanced(TreeNode* root)
{
    if (root==NULL)
    return 1;  //empty tree is balanced

    int lh=height(root->left);
    int rh=height(root->right);

    if (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;

    return 0;
}
