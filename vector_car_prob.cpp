#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;
bool compare (pair<int,int>p1,pair<int,int>p2)
{
   
    int d1= p1.first*p1.first+p2.first*p2.first;
    int d2= p1.second*p1.second+p2.second*p2.second;

    if(d1==d2)
    return p1.first<p2.first;
    
    return d1<d2;

}
int main()
{
    vector<pair<int,int>> v1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v1.push_back(make_pair(x,y));

    }
    sort(v1.begin(),v.end(),compare);
    

    for(auto it: v1)
    {
        cout<<""<<it.first<<""<<it.second;
    }
    return 0;
    
    }

