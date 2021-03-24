#include<bits/stdc++.h>
using namespace std;


int main()
{
  int n,i;
    cout<<"enter the no. of elements u want to insert"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the array element \t "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
   int j=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            j++;
           int temp=a[i];
           a[i]=a[j];
           a[j]=temp;

        }
        
        
    }
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";

 return 0;
}