#include<bits/stdc++.h>
#include<stdio.h>
#include<map>
#include<string>
#include<algorithm>
#include<set>
using namespace std;
void printarr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
void rearrange(int a[], int n)
{//using the approch of quick sort
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            if(i!=j)
            swap(a[i],a[j]);
        j++;
        }

        
    }
}
int main()
{
int n;
cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    printarr(a,n);
    rearrange(a,n);
    printarr(a,n);

    return 0;
}