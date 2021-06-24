#include<bits/stdc++.h>
#include<stdio.h>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int maxProfit(vector<int>& prices) {
       int maxprofit=0;
        int minprice= INT_MAX;
        int n = prices.size();
           for(int i=0;i<n;i++)
           {
               if(prices[i]<minprice)
                   minprice=prices[i];
               else if(prices[i]-minprice>maxprofit)
                   maxprofit= prices[i]-minprice;
           }
        return maxprofit;
}

