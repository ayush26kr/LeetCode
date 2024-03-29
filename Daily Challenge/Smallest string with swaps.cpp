class Solution {
public:
    
    void dfs(vector<vector<int>>&graph,vector<int>&vis,vector<int>&idx,int node,string &s,string &st){
        vis[node]=1;
        st+=s[node];
        idx.push_back(node);
        for(int i=0;i<graph[node].size();i++){
            if(!vis[graph[node][i]]){
                dfs(graph,vis,idx,graph[node][i],s,st);
            }
        }
    }
    
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
 vector<vector<int>>graph(s.size());
        
        for(int i=0;i<pairs.size();i++){
            graph[pairs[i][0]].push_back(pairs[i][1]);
            graph[pairs[i][1]].push_back(pairs[i][0]);
        }
        vector<int>vis(graph.size(),0);
        for(int i=0;i<graph.size();i++){
            if(!vis[i]){
                vector<int>index;
                string st="";
                dfs(graph,vis,index,i,s,st);
                sort(begin(index),end(index));
                sort(begin(st),end(st));
                for(int j=0;j<st.size();j++){
                    s[index[j]]=st[j];
                }
                
            }
        }
        return s;
    }
};
