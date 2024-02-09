  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  int a, b, k = 0, p = 0, i;
  string s;
  cin >> a >> b >> s;
  if (s[a] == 45)
    p++;
  for (i = 0; i < (int) s.size (); i++)
    {
      if (i == a)
	continue;
      else if (!(s[i] >= 48 && s[i] <= 57))
	k++;
    }
  (k == 0 && p == 1) ? cout << "Yes" : cout << "No";
}
