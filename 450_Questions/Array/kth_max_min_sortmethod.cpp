#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,k;
    cout<<"enter the no. of elements u want to insert"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the array element \t "<<endl;
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];

    }
   cout<<"kth smallest position \t ";
     cin>>k;
  // time complexity=(nlogn)
     sort(a,a+n);

//  k-1 bcz array stores from index 0 to n
// if u take k only then it will yield output i+1 eleement

   cout<<a[k-1];


   

 return 0;
}