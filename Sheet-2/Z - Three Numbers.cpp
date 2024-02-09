  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int k, s, x, count = 0;
  cin >> k >> s;
  for (int i = 0; i <= k; i++)
    {
      for (int j = 0; j <= k; j++)
	{
	  x = s - (i + j);
	  if ((x >= 0) && x <= k && ((x + i + j) == s))
	    count++;
	}
    }
  cout << count;
  return 0;
}
