#include<bits/stdc++.h>
#include<stdio.h>
#include<set>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
set<int>s;
//insert array elements in a set
for(int p:a)
{
    s.insert(p);
}
for(int k:s)
{
    cout<<k<<endl;
}
int k;
cout<<"enter the kth smallest element"<<endl;
cin>>k;
auto it = s.begin();
int i=1;
//iterate  over trhe set
while(it!=s.end())
{//use this dist functio to get the dist wich would act as index i'e eg 2-0=2 that is 3rd value = index =2
    if(distance(s.begin(),it)==k)
    cout<<(*it);

    it++;
    i++;
}


return 0;

}