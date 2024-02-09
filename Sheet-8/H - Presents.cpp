  #include<bits/stdc++.h>
#include <numeric>
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

  int n;
  cin >> n;
  int arr[n], i;
  vector < int >data;
  for (i = 0; i < n; i++)
    cin >> arr[i];
  i = 1;
  while (i <= n)
    {
      data.push_back (find (arr, arr + n, i) - arr + 1);
      i++;
    }
  for (int i = 0; i < data.size (); i++)
    cout << data[i] << " ";
}
