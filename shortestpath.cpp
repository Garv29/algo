#include <iostream>
 #include <climits>
 using namespace std;

void printPath(int kay[][10], int v, int u)
{
if (kay[v][u] == 0)
{
return;
}

printPath(kay, v, kay[v][u]);
cout << kay[v][u] << " ";
}
void printSolution(int c[10][10], int kay[10][10], int N)
{
for (int v = 1; v <= N; v++)
{
for (int u = 1; u <= N; u++)
{
if (u != v && kay[v][u] != -1)
{
 
cout << "\nThe shortest path from " << v << "-->" << u << " is ("<< v << " ";
printPath(kay, v, u);
 cout << u << ")";
}
}
}
}
int main()
{
int n, c[10][10], kay[10][10] = {0};
cout << "Enter Number of Nodes : ";
 cin >> n;

cout << "\nEnter Adjacency Matrix : \n"; 
for (int i = 1; i <= n; i++)
{
for (int j = 1; j <= n; j++)
{
cin >> c[i][j];
}
}
for (int k = 1; k <= n; k++)
{
for (int i = 1; i <= n; i++)
{
for (int j = 1; j <= n; j++)
{
if ((c[i][j] > (c[i][k] + c[k][j])) && c[i][k] != 999 && c[k][j] != 999)
{
kay[i][j] = k;
c[i][j] = (c[i][k] + c[k][j]);
}
}
}
}
cout << endl; 
printSolution(c, kay, n);
}
 
