#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
     for(int i=0;i<=n-1;i++)
     cin>>a[i];
    b[0]=a[n-1];
    for(int i=0;i<n-1;i++)
    {
        b[i+1]=a[i];
    }
     for(int i=0;i<=n-1;i++)
    {
        a[i]=b[i];
    }
     for(int i=0;i<=n-1;i++)
     cout <<a[i]<<" ";
}