#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,H,x,flag=0;
    int a[101];
    cin>>N>>H>>x;
    for(int i=0;i<N;i++)
    cin>>a[i];
    for(int i=0;i<N;i++)
    {
        if(a[i]+x>=H)
       {  flag=1;
       break;
       }
    }
    if(flag==1)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;

}