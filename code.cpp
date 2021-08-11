class Solution 
{
    // only for disconnected graph
    public:
	//Function to return a list containing the DFS traversal of the graph.
	void dfs(int i,vector<int> adj[],vector<int> &visited,vector<int>&dfstore)
	{
	    dfstore.push_back(i);
	    visited[i]=1;
	    for(auto s:adj[i])
	    {
	        if(visited[s]!=1)
	        {
	            dfs(s,adj,visited,dfstore);
	        }
	    }
	}
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    vector<int>visited(V+1,0);
	    vector<int>dfstore;
	   // for(int i=0;i<=V;i++)
	    //{
	      //  if(visited[i]!=1)
	        //{
	            dfs(0,adj,visited,dfstore);
	        //}
	    //}
	    return dfstore;
	    // Code here
	}
};
