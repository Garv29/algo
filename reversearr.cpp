#include<bits/stdc++.h>
#include<stdio.h>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
void revarr(int start,int end,int a[])
{
    while(start<end)
    {
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}
void printarr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
int main()
{int n;
cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    printarr(a,n);5
    revarr(0,n-1,a);
    printarr(a,n);
}