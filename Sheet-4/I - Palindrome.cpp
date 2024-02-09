  #include<bits/stdc++.h>
using namespace std;
int
main ()
{

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  string s, s1;
  cin >> s;
  s1 = s;
  reverse (s.begin (), s.end ());
  if (s1.compare (s) == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
