#include"iostream"
#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int a,j,k;
    for(i=0;i<n-1;i++)
    {
        a=i;
        for(j=i+1;j<n;j++)
        {
            if(ar[a]>ar[j])
            {
                a=j;
            }
        }
        k=ar[i];
        ar[i]=ar[a];
        ar[a]=k;
        for(j=0;j<n;j++)
        {
            cout<<ar[j]<<" ";
        }
        cout<<endl;
    }
}
