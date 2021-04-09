#include<bits/stdc++.h>

using namespace std;

void getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
         int min_elem, max_elem;
        int ans = arr[n-1]-arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]>=k)
           
            {
                 max_elem = max(arr[i-1] + k, arr[n-1] - k );
                min_elem = min(arr[0] + k, arr[i] - k );
                ans = min(ans, max_elem - min_elem);
            }
        }
        cout<< " The difference between the largest and the smallest is "<< ans;
    }

    int main( )
    {

        int arr [] ={1, 5, 8, 10};
        int n = sizeof(arr)/sizeof(arr[0]);
        int k = 2;
       
 getMinDiff( arr,n,k);

return 0;
    }