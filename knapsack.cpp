#include <iostream> 
using namespace std;

int max(int a, int b) { return (a > b) ? a : b; } 
void knapSack(int capacity, int w[], int p[], int n)
{
int i, j;
int y = capacity;
 int f[100][100];

for (i = n; i >= 1; i--)
{
for (y = 0; y <= capacity; y++)
{
if (i == n)
{
if (w[i] <= y)
 f[i][y] = p[i];
else
f[i][y] = 0;
}
else
{
if (y >= w[i])
{
f[i][y] = max(f[i + 1][y], (f[i + 1][y - w[i]] + p[i]));
}
else
{
f[i][y] = f[i + 1][y];
}
}
}
 
}
cout << "\nThe matrix is : \n";
 for (i = n; i >= 1; i--)
{
for (j = 1; j <= capacity; j++)
{
cout << f[i][j] << "\t";
}
cout << endl;
}
cout << endl;
//Traceback
int x[100] = {0};
y = capacity;
for (i = 1; i < n; i++)
{
if (y <= 0) break;
if (f[i][y] == f[i + 1][y]) x[i] = 0;
else
{
x[i] = 1;
if ((y - w[i]) < 0) break;
else
y = y - w[i];
}
}
if (y >= w[n])
x[n] = 1;
cout << "\nThe final Martix X is :\n"; 
for (i = 1; i <= n; i++)
{
cout << x[i] << "\t";
}
y = 0;
for (i = 1; i <= n; i++)
{
if (x[i] == 1)
 
y = y + p[i];
}
cout << "\n\nMaximum Profit is : " << y;
}
int main()
{
int i, n, p[20], w[20], capacity;

cout << "Enter number of items : ";
 cin >> n;

cout << "Enter profit and weight of items : \n"; 
5for (i = 1; i <= n; i++)
{
cin >> p[i]; cin >> w[i];
}

cout << "Enter capacity of knapsack : "; 
cin >> capacity;

knapSack(capacity, w, p, n); 
return 0;
}
