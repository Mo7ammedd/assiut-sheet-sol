  #include <bits/stdc++.h>
using namespace std;
int
main ()
{
  int n, i, x, y, temp;
  cin >> n >> x >> y;
  int arr[n][n], row, col;
  for (row = 0; row < n; row++)
    {
      for (col = 0; col < n; col++)
	cin >> arr[row][col];
    }
  for (i = 0; i < n; i++)
    {
      temp = arr[x - 1][i];
      arr[x - 1][i] = arr[y - 1][i];
      arr[y - 1][i] = temp;
    }
  for (i = 0; i < n; i++)
    {
      temp = arr[i][x - 1];
      arr[i][x - 1] = arr[i][y - 1];
      arr[i][y - 1] = temp;
    }
  for (row = 0; row < n; row++)
    {
      for (col = 0; col < n; col++)
	cout << arr[row][col] << " ";
      cout << endl;
    }
}
