  #include<bits/stdc++.h>
#define EPS 1e5
using namespace std;
int
main ()
{
#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  int n;
  cin >> n;
  int arr[n], i;
  for (i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
  while (n--)
    {
      cout << arr[n] << " ";
    }
}
