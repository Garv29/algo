#include<bits/stdc++.h>
#include<stdio.h>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
//use this function to insert the array elements in a set as set only keeps unique value
void dounion(int a[],int b[],int n,int m,set<int>&s)
{
    for(int i=0;i<n;i++)
{
    s.insert(a[i]);
}
    for(int j=0;j<m;j++)
    {
        s.insert(b[j]);
    }
    int d= s.size();
    cout<<d<<end;

}
void printarr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
int main()
{int n,m;
set<int>s;
cin>>n>>m;
    int a[n];
     int b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    printarr(a,n);
   
    printarr(b,m);
    dounion(a,b,n,m);
}