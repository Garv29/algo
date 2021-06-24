#include <iostream>
using namespace std;
int count=0;
int interpolate(int a[],int l ,int h ,int x)
{
count++;
int pos;//1*1
if(l<=h&&x>=a[l]&&x<=a[h])//1*1
{
count++;
pos=l+(((double)(h-l)/(a[h]-a[l]))*(x - a[l]));//1*1
if (a[pos]==x)//1*1
{
count++;
return pos;//1*1
}
if (a[pos]<x)//1*1
{
count++;
return interpolate(a, pos + 1, h, x);//1*n
}
if (a[pos]>x)//1*1
{
count++;
return interpolate(a,l,pos - 1, x);//1*n
}
}
return -1;//1*(n+1)
//total in worst case=5+n+1=6+n
//time complexity=O(n)
}
int main()
{
int a[100],n,pos,ele,i;
cout<<"enter the number of elements:";
cin>>n;
cout<<"enter the elements:";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"enter the search element:";
cin>>ele;
pos =interpolate(a,0,n-1,ele);
if (pos!=-1)
cout<<"Element found at index "<<pos;
else
cout<<"Element not found\n";
cout<<"\nCount: "<<count;
return 0;}
