class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        

        vector<int> adj(n+1, 999);
        adj[k] = 0;
        
        for(int i=1; i<n; i++){
            for(auto t : times){
                int u = t[0], v = t[1], time = t[2];
                if(adj[u]!=999 && adj[v] > adj[u]+time){
                    adj[v] = adj[u]+time;
                }
            }
        }
        
        int ans = 0;
        for(int i=1; i<=n; i++){
            ans = max(ans, adj[i]);
            
        }
        
        if (ans == 999) return -1;
        else return ans;
    }
};