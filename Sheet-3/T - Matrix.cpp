  #include<bits/stdc++.h>
using namespace std;
int
main ()
{

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  int n, k = 0, i, j, sum = 0, sum1 = 0;
  cin >> n;
  int arr[n][n];
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
	cin >> arr[i][j];
    }
  for (i = 0; i < n; i++)
    sum += arr[i][i];
  j = 0;
  for (i = n - 1; i >= 0; i--)
    {
      sum1 += arr[i][j];
      j++;
    }
  cout << abs (sum - sum1);
}
