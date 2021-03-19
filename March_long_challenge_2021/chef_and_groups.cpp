#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    // int temp=0;
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            count++;
            for(int j=i+1;j<s.length();j++)
            {
                 if(s[j]=='1')
                    i++;
            
            else
            {
                 break;
            }
            

            }
           
         
        }
    }
    cout<<count<<endl;
} 

    return 0;
}