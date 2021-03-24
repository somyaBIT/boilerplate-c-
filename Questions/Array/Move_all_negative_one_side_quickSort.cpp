#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int lb,int ub)
{
    int key =a[lb];
   int start=lb;
   int end=ub;
   while(start<end)
   {
       while(a[start]<=key)
       start++;
       while(a[end]>key)
       end--;
       if(start<end)
       {
           int temp=a[start];
           a[start]=a[end];
           a[end]=temp;
       }

   }
   int temp=a[lb];
   a[lb]=a[end];
   a[end]=temp;

   return end;
}
void qs(int a[], int lb,int ub)
{
    if(lb<ub)
    {
        int loc = partition(a,lb,ub);
        qs(a,lb,loc-1);
        qs(a,loc+1,ub);

    }
    // cout<<"hi";
}
void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
   cout<<arr[i]<<" ";
   
}

int main()
{
   int arr[]= {-12, 11, -13, -5, 6, -7, 5, -3, -6};
//    int arr[]= {12, 11, 13, 5, 9, 7, 5, 3, 6};
   int n = sizeof(arr)/sizeof(arr[0]);
   
 qs(arr,0,n-1);


  printArray(arr, n);

 return 0;
}