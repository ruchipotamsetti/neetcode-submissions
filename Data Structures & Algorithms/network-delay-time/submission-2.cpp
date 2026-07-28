class Solution {
public:
    vector<int>dist;
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        dist.resize(n+1, INT_MAX);
        
        unordered_map<int, vector<pair<int, int>>>adj;

        for(int i=0;i<times.size(); i++){
            adj[times[i][0]].push_back({times[i][1], times[i][2]});
        }
        dfs(k,0,adj);

        int res = *max_element(dist.begin()+1, dist.end());

        return res==INT_MAX ? -1 : res;
    }

    void dfs(int node, int time, unordered_map<int, vector<pair<int, int>>>& adj){
        if(time>=dist[node])
            return;

        dist[node]=time;

        for(auto& [nei, w]: adj[node]){
            dfs(nei, time + w, adj);
        }
    }
};
