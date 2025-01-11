#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int first=0;
    int second=1;
    int next;
    for(int j=2;j<=n;j++)
    {
        next=first+second;
        first=second;
        second=next;
    }
    cout<<second;


}

// Time complexity: O(n)    
// Space complexity: O(1)
