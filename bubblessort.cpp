#include <iostream>
 using namespace std;
 int count=0;  //step*frequency
void BubbleSort (int a[], int n)//1*0
{
	int i, j;//1*1
	for (i = 0; i < n; ++i)//1*(n+1)
	{
	    count++;
		for (j = 0; j < n-i-1; ++j)//1*(n)(n)
		{
		    count++;
			if (a[j] > a[j+1])//1*(n-1)(n)
			{
			    count++;
				a[j] = a[j]+a[j+1];//1*(n)(n-1)
				count++;
				a[j+1] = a[j]-a[j + 1];//1*(n)(n-1)
				count++;
				a[j] = a[j]-a[j + 1];//1*(n)(n-1)
				count++;
			}
			count++;
		}//Total=1+(n+1)+(n²)+(n²-n)+(n²-n)+(n²-n)+(n²-n)
                //        =5n²-3n+2
// time complexity= O(n²)
count++;
}
}
int main()
{
	int n, i;
	cout<<"\nEnter the number of element to be sorted: ";
	cin>>n;

	int a[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>a[i];
	}
	BubbleSort(a, n);
	// Display the sorted data.
	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
        cout<<" "<<a[i];
    cout<<"\n Step Count: "<<count;
return 0;}
