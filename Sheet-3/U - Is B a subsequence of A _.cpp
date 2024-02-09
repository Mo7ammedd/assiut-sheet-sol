  #include<bits/stdc++.h>
using namespace std;
int
main ()
{

  ios_base::sync_with_stdio (false);
  cin.tie (NULL);

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  int x, y, i, j;
  cin >> x >> y;
  int arr1[x], arr2[y];
  for (i = 0; i < x; i++)
    cin >> arr1[i];
  for (i = 0; i < y; i++)
    cin >> arr2[i];
  j = 0;
  for (i = 0; i < x; i++)
    {
      if (arr2[j] == arr1[i])
	j++;

    }
  if (j == y)
    cout << "YES";
  else
    cout << "NO";
}
