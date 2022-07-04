class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //store the freq of each number in a unordered map
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        vector<int>res;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;  //minimum heap
        
        for(auto it=mp.begin();it!=mp.end();it++){
            minh.push({it->second,it->first});
            if(minh.size()>k){
                minh.pop();
            }
        }
        while(minh.size()>0){
            res.push_back(minh.top().second);
            minh.pop();
        }
        return res;
        
    }
};
