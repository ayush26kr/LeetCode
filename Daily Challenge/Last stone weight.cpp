class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        int s1,s2;
        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }
        while(pq.size()>1){
            s1=pq.top();
            pq.pop();
            s2=pq.top();
            pq.pop();
            if(s1!=s2){
                pq.push(abs(s1-s2));
            }
        }
        return (pq.empty()?0:pq.top());
    }
};
