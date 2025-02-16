           //Print adjacency list

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        // Code here
        vector<vector<int>> adjList(V);
        
        // Construct the adjacency list
        for (auto& edge : edges) {
            int u = edge.first;
            int v = edge.second;
            
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        
        // Sort each adjacency list for consistent output
        for (int i = 0; i < V; i++) {
            sort(adjList[i].begin(), adjList[i].end());
        }
          return adjList;
    }
};

