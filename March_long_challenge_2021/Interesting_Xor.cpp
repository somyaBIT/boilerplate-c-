#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{ long long n,y,r;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       if( pow(2,i)>n)
       {
           y=i;
           break;
       }
    }
    r=pow(2,y-1);
    // for(int i=1;i<y-1;i++)
    // {
    //     // for(int j=i+1;j<y;j++)
    //     // {
    //         r=i^i+1;
    //         if(r==n)
    //         {
    //             q=i*(i+1);
    //             if(q>max)
    //             max=q;
    //         }
    //     // }
        
    // }

cout<<r*(3*r-n-4)+n+1<<endl;
}


    return 0;
}