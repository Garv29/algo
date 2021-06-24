#include<bits/stdc++.h>
#include<stdio.h>
#include<set>
#include<string>
#include<algorithm>
using namespace std;
void printarr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
void sorted(int a[],int n)
{
    int low=0;
    int mid=0;
    int high=n-1;
    //sort all the elements
    while(mid<=high)
    {
        switch (a[mid])
        {//if the elemnt is 0
        case 0:
           swap(a[low++],a[mid++]);
            break;
//1
            case 1:
            mid++;
            break;
            //2
            case 2:
            swap(a[mid],a[high--]);
            break;

        
        
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
    sorted(a,n);    
    printarr(a,n);
    return 0;
   
}