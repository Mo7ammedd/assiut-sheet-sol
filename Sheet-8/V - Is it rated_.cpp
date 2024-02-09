  #include<bits/stdc++.h>
using namespace std;
int
main ()
{

  ios_base::sync_with_stdio (false);
  cin.tie (NULL);

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output1.txt", "w", stdout);
#endif

  int t, k = 0, i, j;
  cin >> t;
  int arr[t][2];
  for (i = 0; i < t; i++)
    {
      for (j = 0; j < 2; j++)
	{
	  cin >> arr[i][j];
	}
      if (arr[i][0] != arr[i][1])
	k++;
    }
  if (k != 0)
    {
      cout << "rated";
      return 0;
    }
  for (i = 0; i < t - 1; i++)
    {
      if (arr[i][1] < arr[i + 1][1])
	k++;
      if (arr[i][0] < arr[i + 1][0])
	k++;
    }
  if (k != 0)
    {
      cout << "unrated";
      return 0;
    }
  else if (k == 0)
    {
      cout << "maybe";
      return 0;
    }
}
