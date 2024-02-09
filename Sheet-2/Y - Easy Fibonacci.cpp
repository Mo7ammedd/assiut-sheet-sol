  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int n, t1 = 0, t2 = 1, next, i;
  cin >> n;
  for (i = 1; i <= n; i++)
    {
      if (i == 1)
	{
	  cout << t1 << " ";
	  continue;
	}
      if (i == 2)
	{
	  cout << t2 << " ";
	  continue;
	}
      next = t1 + t2;
      t1 = t2;
      t2 = next;
      cout << next << " ";
    }
}
