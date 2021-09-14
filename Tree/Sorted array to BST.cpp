class Solution {
public:
    TreeNode* BST_construct(vector<int>&nums,int start,int end)
    {
        if(start>end)
            return NULL;
        int mid=start+(end-start)/2;
        TreeNode* current=new TreeNode(nums[mid]);
        current->left=BST_construct(nums,start,mid-1);
        current->right=BST_construct(nums,mid+1,end);
        return current;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0)
            return NULL;
        return BST_construct(nums,0,nums.size()-1);
        
    }
};
