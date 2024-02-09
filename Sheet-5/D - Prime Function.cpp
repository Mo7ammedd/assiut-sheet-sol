  #include <bits/stdc++.h>
using namespace std;
void
prime (int n)
{
  int c = 0;
  for (int i = 3; i <= sqrt (n); i++)
    {
      if (n % i == 0)
	{
	  c++;
	  break;
	}
    }
  (c == 0) ? cout << "YES" << endl : cout << "NO" << endl;
}

int
main ()
{
#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  while (t--)
    {
      int n;
      cin >> n;
      if (n == 1)
	cout << "NO" << endl;
      else if (n == 2)
	cout << "YES" << endl;
      else if (n % 2 == 0)
	cout << "NO" << endl;
      else
	prime (n);
    }
}
