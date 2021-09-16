class Solution {
public:
    //inorder arranges elememts in ascending order
    void InOrder(TreeNode* root,vector<int>&elements){
        if(root==NULL)
            return;
        InOrder(root->left,elements);
         elements.push_back(root->val);
         InOrder(root->right,elements);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>elements;
        InOrder(root,elements);
        for(int i=1;i<=elements.size();i++){
            return elements[k-1];
    }
        return 0;
    }
