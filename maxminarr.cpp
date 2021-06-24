#include<bits/stdc++.h>
#include<stdio.h>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
void maxmin(int n,int a[])
{
    int max,min;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
        
    }
    cout<<max<<" "<<min<<" "<<endl;
}
void printarr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" "<<endl;
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
    printarr(a,n);
    maxmin(n,a);
    
}