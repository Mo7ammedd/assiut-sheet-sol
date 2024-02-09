  #include<bits/stdc++.h>
using namespace std;
int
main ()
{

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  int n, k, i, j, p = 1;
  cin >> n >> k;
  bool flag = true;
  for (i = 1; i <= n; i++)
    {
      if (i % 2 == 1)
	{
	  for (j = 0; j < k; j++)
	    cout << "#";
	  cout << endl;
	}
      else
	{
	  if (p % 2 == 0)
	    cout << "#";
	  for (j = 0; j < k - 1; j++)
	    cout << ".";
	  if (p % 2 == 0)
	    cout << endl;
	  if (p % 2 == 1)
	    cout << "#" << endl;
	  p++;
	}
    }
}
