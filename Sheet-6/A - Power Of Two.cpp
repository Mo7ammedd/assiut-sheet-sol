  #include <bits/stdc++.h>
using namespace std;
#define ll long long
int
main ()
{

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  ll n;
  cin >> n;
  ((ceil (log2 (n)) == floor (log2 (n)))) ? cout << "YES" : cout << "NO";
}
