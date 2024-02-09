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

  int n, k, count = 0;
  cin >> n >> k;
  while (n--)
    {

      int p, rem;
      vector < int >data;
      cin >> p;
      while (p != 0)
	{
	  rem = p % 10;
	  data.push_back (rem);
	  p = p / 10;
	}
      int i = 0;
      sort (data.begin (), data.end ());
      while (i <= k)
	{
	  if (binary_search (data.begin (), data.end (), i))
	    i++;
	  else
	    break;
	}
      i--;
      if (i == k)
	count++;
    }
  cout << count;
}
