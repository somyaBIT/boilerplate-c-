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
    cout<<"Reverse array ";
    for(i=n-1;i>=0;--i)
    {
        cout<<a[i]<<"\t";
    }

 return 0;
}