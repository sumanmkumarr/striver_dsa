#include<iostream>
using namespace std;
int main()
{
    int n,m;// n=vertex, m=edges
    cin>>n>>m;
    int adj[n+1][m+1]={0};
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}


// Time complexity: O(n*m) , n=vertex, m=edges, this will be the time complexity in case of showing the adjacency matrix otherwise it will be o(m)
//  Space complexity: O(n*m)    