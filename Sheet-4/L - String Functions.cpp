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

  int n, q;
  cin >> n >> q;
  string str;
  cin >> str;
  while (q--)
    {
      string str1;
      cin >> str1;
      if (str1 == "substr")
	{
	  int l, r;
	  cin >> l >> r;
	  if (l > r)
	    swap (l, r);
	  string s1;
	  s1 = str.substr (l - 1, r - l + 1);
	  cout << s1 << endl;
	}
      else if (str1 == "pop_back")
	str.pop_back ();
      else if (str1 == "front")
	cout << str[0] << endl;
      else if (str1 == "back")
	cout << str[str.size () - 1] << endl;
      else if (str1 == "sort")
	{
	  int l, r;
	  cin >> l >> r;
	  if (l > r)
	    swap (l, r);
	  sort (str.begin () + l - 1, str.begin () + r);
	}
      else if (str1 == "reverse")
	{
	  int l, r;
	  cin >> l >> r;
	  if (l > r)
	    swap (l, r);
	  reverse (str.begin () + l - 1, str.begin () + r);
	}
      else if (str1 == "print")
	{
	  int pos;
	  cin >> pos;
	  cout << str[pos - 1] << endl;
	}
      else if (str1 == "push_back")
	{
	  char x;
	  cin >> x;
	  str.push_back (x);
	}
    }
}
