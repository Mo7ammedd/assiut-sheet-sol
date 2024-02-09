  #include <bits/stdc++.h>
using namespace std;
int
main ()
{
#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  int a;
  cin >> a;
  if (a % 2 == 0 && a > 2)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
