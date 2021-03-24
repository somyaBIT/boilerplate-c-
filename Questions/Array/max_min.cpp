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
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
     for(i=0;i<n;i++)
    {
        if(a[i]<max)
        {
            min=a[i];
        }
    }
    cout<<"maximum element"<<max<<endl<<"min element"<<min;

   

 return 0;
}