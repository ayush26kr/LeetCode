// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
  void duplicate_util(int arr[],int n,vector<int>&ans){
      unordered_map<int,int>mp;
      for(int i=0;i<n;i++){
          mp[arr[i]]++;
      }
      for(auto it=mp.begin();it!=mp.end();it++){
          if(it->second>1){
              ans.push_back(it->first);
          }
      }
      sort(ans.begin(),ans.end());
  }
      
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int>ans;
        duplicate_util(arr,n,ans);
        if(ans.size()<1){
        ans.push_back(-1);
        return ans;
        }
        return ans;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends
