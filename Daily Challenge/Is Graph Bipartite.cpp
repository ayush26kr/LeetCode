class UF {
public:
    UF (int n) {
        root = vector<int>(n);
        for (int i=0; i<n; ++i) {
            root[i] = i;
        }
    }
    
    int Find(int x) {
        if (root[x] == x) return x;
        return root[x] = Find(root[x]);
    }
    
    void Union(int x, int y) {
        int rx = Find(x);
        int ry = Find(y);
        if (rx != ry) {
            root[ry] = rx;
        }
    }
    vector<int> root;
};

class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        UF uf(n);
        
        for (int i=0; i<n; ++i) {
            for (auto neighbor: graph[i]) {
                if (uf.Find(i) == uf.Find(neighbor)) { // two connected nodes are in the same set
                    return false;
                }
                uf.Union(graph[i][0], neighbor); // push this neighbor to the same set as it's first neighbor
            }
        }
        return true;
    }
};
