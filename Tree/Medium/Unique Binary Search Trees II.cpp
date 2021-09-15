class Solution {
public:
    vector<TreeNode*>countTrees(int l,int r)
    {
        if(l>r)
            return {NULL};
        vector<TreeNode*>ans;
        vector<TreeNode*>left;
        vector<TreeNode*>right;
        for(int root=l;root<=r;root++)
        {
            left=countTrees(l,root-1);
            right=countTrees(root+1,r);
            for(auto Node_left:left){
                for(auto Node_right:right){
                    TreeNode* node=new TreeNode(root);
                    node->left=Node_left;
                    node->right=Node_right;
                    ans.push_back(node);
                }
            }
            
            
        }
        return ans;
    }
    vector<TreeNode*> generateTrees(int n) {
        return countTrees(1,n);
        
    }
};
