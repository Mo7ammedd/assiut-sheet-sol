  #include<bits/stdc++.h>
using namespace std;
int
main ()
{

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  for (int i = 4; i <= t; i++)
    {
      int n = i, c = 0, r = 0;
      while (n)
	{
	  r++;
	  int rem = n % 10;
	  if (rem == 4 || rem == 7)
	    c++;
	  n = n / 10;
	}
      if (r == c)
	{
	  if (t % i == 0)
	    {
	      cout << "YES" << endl;
	      return 0;
	    }
	}
    }
  cout << "NO" << endl;
}
