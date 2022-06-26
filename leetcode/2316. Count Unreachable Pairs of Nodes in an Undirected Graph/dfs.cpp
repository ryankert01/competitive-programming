class Solution {
public:
    typedef long long ll;
    void dfs(int node, unordered_map<int, vector<int>>& m, ll& cnt, vector<int>& vis){
        vis[node] = 1;
        cnt++;
        for(int i : m[node]){
            if(vis[i] == 0)dfs(i,m,cnt,vis);
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        // make adjacency list
        unordered_map<int,vector<int>>m;
        for(int i = 0; i < edges.size(); i++){
            m[edges[i][0]].push_back(edges[i][1]);
            m[edges[i][1]].push_back(edges[i][0]);
        }
        
        // find all possible edges
        ll ans = ((ll)n*(n-1))/2;
        
        // count alreally connected node and calculate its edges
        vector<int>vis(n,0);
        for(int i = 0; i < n; i++)
        {
            if(vis[i] == 0)
            {
                ll cnt = 0;
                dfs(i,m,cnt,vis);
                ans -= (cnt*(cnt-1))/2;
            }
        }
        return ans;
    }
};
