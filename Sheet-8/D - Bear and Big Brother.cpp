  #include <bits/stdc++.h>
using namespace std;
int
main ()
{
#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  int a, b, k = 0;
  cin >> a >> b;
  if (a >= b)
    cout << "1";
  else
    {
      while (1)
	{
	  a = a * 3;
	  b = b * 2;
	  k++;
	  if (a > b)
	    break;
	}
      cout << k;
      return 0;
    }
}
