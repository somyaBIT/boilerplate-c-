#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t,n,temp=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long int a[n],sum=0;
        for( long int i=0;i<n;i++)
        cin>>a[i];
        // sort the array
        sort(a,a+n);
       
         for( long int i=0;i<n;i++)
         {
             if(a[i]>i+1)
             {
                temp=1;
                 break;
             }
             
                 
                //   sum += (i+1-a[i]);
                sum += abs(a[i]-(i+1));
            
            
         }
         
        if(temp ==1 )
        { cout<<"Second"<<endl;
             
         }
          else 
          {
              if(sum % 2==1)
              cout<<"First"<<endl;
              else
              cout<<"Second"<<endl;

          }
         

    }
    return 0;

}