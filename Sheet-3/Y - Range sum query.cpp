  #include<bits/stdc++.h>
using namespace std;
#define ll long long
int
main ()
{

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  ll n, i, x, sum = 0;
  cin >> n >> x;
  ll ar[n];
  for (i = 1; i <= n; i++)
    cin >> ar[i];
  ll pre[100005];
  for (i = 1; i <= n; i++)
    {
      pre[0] = 0;
      pre[i] = pre[i - 1] + ar[i];
    }
  while (x--)
    {
      ll l, r;
      sum = 0;
      cin >> l >> r;
      sum = pre[r] - pre[l - 1];
      cout << sum << endl;
    }
  return 0;
}
