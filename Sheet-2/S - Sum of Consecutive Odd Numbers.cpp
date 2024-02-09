  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int t;
  cin >> t;
  while (t--)
    {
      int n, m, i, sum = 0;
      cin >> n >> m;
      if (m > n)
	swap (m, n);
      m = m + 1;
      n = n - 1;
      if (m % 2 == 0)
	m = m + 1;
      for (i = m; i <= n; i += 2)
	sum = sum + i;
      cout << sum << "\n";
    }
}
