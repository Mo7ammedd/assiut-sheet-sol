  #include<bits/stdc++.h>
using namespace std;
#define sz(c) (int)(c).size()
int
main ()
{

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  long long int n, k, t = 0, i, j;
  cin >> n >> k;
  n++;
  for (j = 0; j < n; j++)
    {
      string str;
      getline (cin, str);
      long long int d = 0;
      if (str[0] == '+')
	{
	  for (i = 2; i < (int) str.size (); i++)
	    d = d * 10 + (str[i] - '0');
	  k = k + d;
	}
      else if (str[0] == '-')
	{
	  for (i = 2; i < (int) str.size (); i++)
	    d = d * 10 + (str[i] - '0');
	  if (k >= d)
	    k = k - d;
	  else
	    t++;
	}
    }
  cout << k << " " << t;
}
