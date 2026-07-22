class Solution {
public:
    unordered_set<int>visited;
    int countComponents(int n, vector<vector<int>>& edges) {
        unordered_map<int, vector<int>>m;

        for(int i=0;i<n;i++){
            m[i] = {};
        }

        for(auto e:edges){
            m[e[0]].push_back(e[1]);
            m[e[1]].push_back(e[0]);
        }

        int connected = 0;
        for(int i=0;i<n;i++){
            if(!visited.count(i)){
                connected++;
                dfs(i, m);
            }
        }

        return connected;
    }

    void dfs(int node, unordered_map<int, vector<int>>&m){
        if(visited.count(node))
            return;

        visited.insert(node);

        for(int nei:m[node]){
            if(!visited.count(nei))
                dfs(nei, m);
        }

        return;
    }
};
