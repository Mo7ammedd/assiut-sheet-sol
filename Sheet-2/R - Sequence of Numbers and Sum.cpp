  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int n, m, i;
  while (cin >> n >> m && !(n <= 0 || m <= 0))
    {
      if (m > n)
	swap (n, m);
      int sum = 0;
      for (i = m; i <= n; i++)
	{
	  cout << i << " ";
	  sum = sum + i;
	}
      cout << "sum =" << sum << "\n";
    }
}
