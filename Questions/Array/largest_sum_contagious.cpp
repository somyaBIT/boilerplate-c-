#include<bits/stdc++.h>

using namespace std;

int maxSubarraySum(int arr[], int n){
        
        // Your code here
        // kadens algo
        // int max_sum=-1;
        // int max_end=0;
        // for(int i=0;i<n;i++)
        // {
        //     max_end=max_end+arr[i];
        //     if(max_end<0)
        //     max_end=0;
        //     else if(max_sum<max_end)
        //     max_sum=max_end;
        // }
        
        //    return max_sum;
        int sum=arr[0];
        int max= arr[0];
        for(int i=1;i<=n-1;i++)
        {
            sum+=arr[i];
            if(sum>max)
            max=sum;
        }
        return max;
   
    }
    int main()
    {
        // int arr[] =  {-1,-2,-3,-4};
        int arr[] = {1,2,3,-2,5};
        int n= sizeof(arr)/sizeof(arr[0]);
        
        cout<<"Max subarray sum is "<< maxSubarraySum(arr,n)<< " of elements (1, 2, 3, -2, 5) which is a contiguous subarray";


    }