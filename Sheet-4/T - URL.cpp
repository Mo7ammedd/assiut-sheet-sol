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

  vector < char >str;
  char input;
  while (cin >> input)
    str.push_back (input);
  for (int i = 0; i < str.size (); i++)
    {
      if (str[i] == 'u' && str[i + 1] == 's' && str[i + 2] == 'e'
	  && str[i + 3] == 'r' && str[i + 4] == 'n' && str[i + 5] == 'a'
	  && str[i + 6] == 'm' && str[i + 7] == 'e' && str[i + 8] == '=')
	{
	  cout << "username: ";
	  i = i + 9;
	  while (str[i] != '&')
	    {
	      cout << str[i];
	      i++;
	    }
	  cout << endl;
	}
      if (str[i] == 'p' && str[i + 1] == 'w' && str[i + 2] == 'd'
	  && str[i + 3] == '=')
	{
	  i = i + 4;
	  cout << "pwd: ";
	  while (str[i] != '&')
	    {
	      cout << str[i];
	      i++;
	    }
	  cout << endl;
	}
      if (str[i] == 'p' && str[i + 1] == 'r' && str[i + 2] == 'o'
	  && str[i + 3] == 'f' && str[i + 4] == 'i' && str[i + 5] == 'l'
	  && str[i + 6] == 'e' && str[i + 7] == '=')
	{
	  cout << "profile: ";
	  i = i + 8;
	  while (str[i] != '&')
	    {
	      cout << str[i];
	      i++;
	    }
	  cout << endl;
	}
      if (str[i] == 'r' && str[i + 1] == 'o' && str[i + 2] == 'l'
	  && str[i + 3] == 'e' && str[i + 4] == '=')
	{
	  i = i + 5;
	  cout << "role: ";
	  while (str[i] != '&')
	    {
	      cout << str[i];
	      i++;
	    }
	  cout << endl;
	}
      if (str[i] == 'k' && str[i + 1] == 'e' && str[i + 2] == 'y'
	  && str[i + 3] == '=')
	{
	  i = i + 4;
	  cout << "key: ";
	  while (i != str.size ())
	    {
	      cout << str[i];
	      i++;
	    }
	  cout << endl;
	}
    }
}
