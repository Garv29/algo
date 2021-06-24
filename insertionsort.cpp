#include<iostream>
using namespace std;
int count =0;//Step Frequency
void Insertionsort(int a[],int n)
{
int i,j,key;//1*1
for(i=0;i<n;i++)//1*(n+1)
{
count++;
count++;
key=a[i];//1*(n)
count++;
for(j=i-1;j>=0&&key<a[j];j--)//1*(n)(n-1)
{
count++;
count++;
a[j+1]=a[j];//1*(n)(n-2)
}
a[j+1]=key;//1*(n)
count++;
count++;
}
count++;
//Total=1+(n+1)+n+(n²-n)+(n²-2n)+n=2n²-n+2
//time complexity=O(n²)
for(i=0;i<n;i++)
{
cout<<" "<<a[i];
}
}
int main()
{
int i,j,temp,n,a[50];
cout<<"enter number of elements\n";
cin>>n;
cout<<"enter elements\n";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"sorted list:\n";
Insertionsort(a,n);
cout<<"\nnumber of steps = "<<count<<"\n";
return 0;
}
