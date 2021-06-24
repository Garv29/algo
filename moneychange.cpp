#include<bits/stdc++.h>
#include<algorithm>>

using namespace std ;
//compare function to pass in the sort function to make it dec order
bool compare(int a ,int b)
{
    return a>b;
}
int main()
{
    int coins[]={1,2,5,10,20,50,100,200,500,2000};
    int money;
    int n= sizeof(coins);
    cin>>money;
    int lb = lower_bound(coins,coins+n,money)-coins;
        cout<<lb;
        return 0;
}