class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& ps) {
        int n = ps.size(),k = n, res = 0, i =0;
        unordered_set<int>st;
        priority_queue<pair<int,int>>pq;
        while(--k)
        {
            st.insert(i);
            for(int j  = 0; j < n; j++)
            {
                if(st.find(j) == st.end())
                {
                    pq.push({ -(abs(ps[i][0] - ps[j][0]) + abs(ps[i][1]-ps[j][1])) , j });
                }
            }
            while(st.find(pq.top().second) != st.end())
                pq.pop();
            res -= pq.top().first;
            i = pq.top().second;
            pq.pop();
        }
        return res;
    }
};
