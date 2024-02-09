  #include<bits/stdc++.h>
#include <numeric>
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

  int t;
  cin >> t;
  while (t--)
    {
      string str1, str2;
      cin >> str1 >> str2;
      int len1 = str1.size ();
      int len2 = str2.size (), i = 0, p = 0, q = 0;
      while (p < len1 && q < len2)
	{
	  if (i % 2 == 0)
	    {
	      cout << str1[p];
	      p++;
	      i++;
	    }
	  else
	    {
	      cout << str2[q];
	      q++;
	      i++;
	    }
	}
      if (p != len1)
	{
	  for (i = p; i < len1; i++)
	    cout << str1[i];
	}
      if (q != len2)
	{
	  for (i = q; i < len2; i++)
	    cout << str2[i];
	}
      cout << "\n";
    }
}
