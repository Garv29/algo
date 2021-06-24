#include<bits/stdc++.h>
#include<stdio.h>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int max_sum_conti(int a[],int n)
{
    int current= a[0];
    int tillnow= a[0];
    for(int i=1;i<n;i++)
    {
        current= max(a[i],current+a[i]);
        tillnow=max(tillnow,current);

    }
    return tillnow;
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
    printarr(a,n);
   int k = max_sum_conti(a, n);
    cout<<k<<endl;
    return 0;
}