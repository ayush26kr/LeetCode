class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int size=m+n-1;
        int i=m-1;
        int j=n-1;
        for(;i>=0 && j>=0;size--){
            if(nums1[i]>nums2[j])
                nums1[size]=nums1[i--];
            else
                nums1[size]=nums2[j--];
        }
            while(i>=0)
                nums1[size--]=nums1[i--];
            while(j>=0)
                nums1[size--]=nums2[j--];
                
    }