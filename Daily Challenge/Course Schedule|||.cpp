struct comp{
    bool operator()(const vector<int> &v1, const vector<int> &v2){
        return v1[1] < v2[1];
    }
};
class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(), courses.end(), comp()); // because I want to pick course which ends 1st
        priority_queue<int> pq;
        int total = 0;
        for(auto c : courses)
        {
            int dur = c[0];       //[100, 200] duration is 100 and ends at 200
            int end = c[1];
            total += dur;
            if(total <= end){
                pq.push(dur);                           //Push the duration if it can fit in time window i.e. ex. total 1000 can be finished before 1100 or at 1000 but 100 can not finish before 2.
            }else if(pq.size() and pq.top() > dur){ // update your last value in pq if you find better time duration (greedy)
                total -= pq.top();
                pq.pop();
                pq.push(dur);
            }else{                                                // Do not consider this  ex. [[100,2], [32,50]]
                total -= dur;
            }
        }
        return pq.size();
    }
};
