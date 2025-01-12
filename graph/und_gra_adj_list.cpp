#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n+1);
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<i<<"->";
        for(int j:adj[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


// time complexity of the code is O(n+m) where n is the number of vertices and m is the number of edges.
// space complexity of the code is O(n+m) where n is the number of vertices and m is the number of edges.