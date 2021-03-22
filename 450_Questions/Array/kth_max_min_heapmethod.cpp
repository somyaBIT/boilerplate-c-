#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,k,t;
    cin>>t;
    while(t--)
    {cout<<"enter the no. of elements u want to insert"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the array element \t "<<endl;
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];

    }
   cout<<"kth smallest position \t ";
     cin>>k;
  priority_queue<int,vector<int>,greater<int>> p;
  for( i=0;i<n;i++)
  {
    p.push(a[i]);
  }
  int ans;
  i=1;
  while (!p.empty())
  {
    /* code */
    if(i==k)
    {
      ans=p.top();
      break;
    }
    i++;
    p.pop();
  }
  cout<<ans<<"\n";
  

    }
   

 return 0;
}