#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q,k,i,e;
    cin>>n>>q;
    
    int **mat =new int *[n];
    for ( i=0;i<n;i++)
    {
        cin>>k;
        mat[i]=new int[k];
        for( e=0;e<k;e++)
        {
            cin>>mat[i][e];
        }
    }
    for(i=0;i<q;i++)
    {
        cin>>k>>e;
        cout<<mat[k][e]<<endl;
    }
    
}

