//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int
main ()
{

  ios_base::sync_with_stdio (false);
  cin.tie (NULL);

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  int x, y, i;
  cin >> x >> y;
  while (1)
    {
      x++;
      for (i = 2; i <= x / 2; i++)
	{
	  if (x % i == 0)
	    break;
	}
      i--;
      if (i == x / 2)
	{
	  if (x == y)
	    cout << "YES";
	  else
	    cout << "NO";
	  break;
	}
    }
}
