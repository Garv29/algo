#include  <iostream>
using namespace std;

int shellSort(int a[], int n)
{  

    for (int gap = n/2; gap > 0; gap /= 2)
    {
        
        for (int i = gap; i < n; i += 1)
        { 
            
            int temp = a[i];
            
  
           
            int j;            
            for (j = i; j >= gap && a[j - gap] > temp; j -= gap)
               { a[j] = a[j - gap];
                 
               }
                           
            a[j] = temp;
            
        }
       
    }
    
    return 0;
}
  
void printArray(int a[], int n)
{
    for (int i=0; i<n; i++)
        cout << a[i] << " ";
}
  
int main()
{
    int a[] = {12, 34, 54, 2, 3}, i;
    int n = sizeof(a)/sizeof(a[0]);
  
    cout << "Array before sorting: \n";
    printArray(a, n);
  
    shellSort(a, n);
  
    cout << "\nArray after sorting: \n";
    printArray(a, n);
    return 0;
}

