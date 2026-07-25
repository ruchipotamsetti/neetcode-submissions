class DSU{
public:
    vector<int>parent;
    vector<int>rank;
    DSU(int n){
        parent.resize(n);
        rank.resize(n,1);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
    } 

    int find(int node){
        int res = node;
        while(res != parent[res]){
            parent[res] = parent[parent[res]];
            res = parent[res];
        }
        return res;
    }

    bool unionSets(int n1, int n2){
        int p1 = find(n1);
        int p2 = find(n2);

        if(p1==p2)
            return false;

        if(rank[p1]>rank[p2]){
            parent[p2]=p1;
            rank[p1]+=rank[p2];
        }
        else{
            parent[p1]=p2;
            rank[p2]+=rank[p1];
        }
        return true;   
    }
};

class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        DSU dsu(n);
        int res = n;
        for(auto e:edges){
            if(dsu.unionSets(e[0], e[1]))
                res--;
        }
        return res;
    }
};
