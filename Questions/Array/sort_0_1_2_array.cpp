#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,max=0;
    cout<<"enter the no. of elements u want to insert"<<endl;
    cin>>n;
    int a[n],min=a[0];
    cout<<"enter the array element \t "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int c1=0,c2=0,c3=0,k=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        c1++;
        else if(a[i]==1)
        c2++;
        else
        c3++;
       
    }
    for(i=0;i<c1;i++)
    a[k++]=0;
    for(i=0;i<c2;i++)
    a[k++]=1;
    for(i=0;i<c3;i++)
    a[k++]=2;

     for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    

   

 return 0;
}