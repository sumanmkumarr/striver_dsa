#include<iostream>
#include<vector>
using namespace std;
int main()
{
   int n,m;
    cin>>n>>m;
    vector<int>adj(m+1);
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    for(int i=1;i<=m;i++)
    {
        for(int j:adj[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}