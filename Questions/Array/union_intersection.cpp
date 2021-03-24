#include<bits/stdc++.h>
using namespace std;


int main()
{
  int n,i,m;
    cout<<"enter the no. of elements u want to insert for n and m"<<endl;
    cin>>n>>m;
    int a[n],b[m];
    map<int,int>freq;
    cout<<"enter the a array element \t "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        freq[a[i]]++;

    }
     cout<<"enter the b array element \t "<<endl;
   for(i=0;i<m;i++)
   {
      cin>>b[i];
       freq[b[i]]++;
   }
//    total no.of elements in the map
   cout<<"total no of elements after comining two array no repetition of an element  "<<freq.size()<<endl;
    cout<<"union of a or b";
   for(auto &e1:freq){
       cout<<e1.first<<" "<<endl;

   }
   cout<<"intersecting element of a and b";
    for(auto &e1:freq)
 if(e1.second>1)
        {
           cout<<e1.first;
      }
 return 0;
}