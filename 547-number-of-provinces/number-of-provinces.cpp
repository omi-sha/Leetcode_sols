class Solution {
private:
    void dfs(int Node, vector<vector<int>>& adj, vector<int>& vis) {
        vis[Node] = 1;
        for (auto it : adj[Node]) {
            if (!vis[it]) {
                dfs(it, adj, vis);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        vector<vector<int>> adjList(V);
        
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (isConnected[i][j] == 1 && i != j) {
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }

        vector<int> vis(V, 0);
        int count = 0;
        
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfs(i, adjList, vis);
                count++;
            }
        }
        
        return count;
    }
};
