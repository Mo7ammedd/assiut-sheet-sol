  #include<bits/stdc++.h>
using namespace std;
int
main ()
{

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  string s;
  getline (cin, s);
  int i;
  for (i = 0; i < s.size (); i++)
    {
      if (s[i] >= 'a' && s[i] <= 'z')
	s[i] = s[i] - 32;
      else if (s[i] >= 'A' && s[i] <= 'Z')
	s[i] = s[i] + 32;
      else if (s[i] == ',')
	s[i] = ' ';
    }
  cout << s;
}
