#include<bits/stdc++.h>
using namespace std;
int
main ()
{

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  int t, k = 0;
  cin >> t;
  while (t--)
    {
      int a, b;
      cin >> a >> b;
      if (b - a >= 2)
	k++;
    }
  cout << k << endl;
}
