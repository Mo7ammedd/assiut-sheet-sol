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
  while (t--)
    {
      string s;
      cin >> s;
      int i, count = 0;
      for (i = 0; i < s.size (); i++)
	{
	  if ((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0')
	      || (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1'))
	    {
	      count++;
	      break;
	    }
	}
      (count == 0) ? cout << "Bad\n" : cout << "Good\n";
    }
}
