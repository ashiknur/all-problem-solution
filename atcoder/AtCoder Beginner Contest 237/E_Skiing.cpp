#include<bits/stdc++.h>
using namespace std;
# define INF 0x3f3f3f3f
  
typedef pair<int, int> iPair;
  
void addEdge(vector <pair<int, int> > adj[], int u,
                                     int v, int wt)
{
    adj[u].push_back(make_pair(v, wt));
    adj[v].push_back(make_pair(u, -2*wt));
}
   
void shortestPath(vector<pair<int,int> > adj[], int V, int src)
{
    priority_queue< iPair, vector <iPair> , greater<iPair> > pq;
  
    vector<int> dist(V, INF);
    pq.push(make_pair(0, src));
    dist[src] = 0;
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        for (auto x : adj[u])
        {
            int v = x.first;
            int weight = x.second;
            if (dist[v] > dist[u] + weight)
            {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
    int ans=0;
    for (int i = 0; i < V; ++i)
        ans = max(ans, -1*dist[i]);
    cout<<ans<<endl;
}
int main()
{
    int V = 9;
    int n,m;
    cin>>n>>m;
    vector<iPair > adj[n];
    int ar[n];
    for(auto &x:ar) cin>>x;
    for(int i=0;i<m;i++) 
    {
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        if(ar[u]>=ar[v])
        {
            addEdge(adj,u,v,ar[v]-ar[u]);

        }
        else
        {
            addEdge(adj,v,u,ar[u]-ar[v]);
        }

    }
  
    
  
    shortestPath(adj, n, 0);
  
    return 0;
}