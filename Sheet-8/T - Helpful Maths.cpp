  #include<bits/stdc++.h>
using namespace std;
int
main ()
{

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  string str;
  int i, j = 0;
  getline (cin, str);
  sort (str.begin (), str.end ());
  for (i = 0; i < str.size (); i++)
    {
      if (str[i] == '+')
	continue;
      else
	{
	  cout << str[i];
	  if (i < str.size () - 1)
	    cout << "+";
	}
    }
}
