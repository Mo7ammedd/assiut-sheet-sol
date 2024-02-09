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

  int n, i, sum;
  cin >> n;
  char input;
  vector < char >str;
  while (cin >> input)
    str.push_back (input);
  sum = 0;
  for (i = 0; i < str.size (); i++)
    {
      if (str[i] == 'V')
	sum = sum + 5;
      else if (str[i] == 'W')
	sum = sum + 2;
      else if (str[i] == 'X')
	i++;
      else if (str[i] == 'Y')
	{
	  str.push_back (str[i + 1]);
	  i++;
	}
      else if (str[i] == 'Z')
	{
	  if (str[i + 1] == 'V')
	    {
	      sum = sum / 5;
	      i++;
	    }
	  else if (str[i + 1] == 'W')
	    {
	      sum = sum / 2;
	      i++;
	    }
	  else
	    continue;
	}
    }
  cout << sum;
}
