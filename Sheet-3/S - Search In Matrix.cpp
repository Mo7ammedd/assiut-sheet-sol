  #include<bits/stdc++.h>
using namespace std;
int
main ()
{

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  int n, m, k = 0, i, j;
  cin >> n >> m;
  int arr[n][m];
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < m; j++)
	cin >> arr[i][j];
    }
  int p;
  cin >> p;
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < m; j++)
	{
	  if (arr[i][j] == p)
	    {
	      k++;
	      break;
	    }
	}
    }
  if (k == 0)
    cout << "will take number" << "\n";
  else
    cout << "will not take number" << "\n";
}
