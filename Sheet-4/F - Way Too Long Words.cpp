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
      string s1;
      cin >> s1;
      int len = s1.size ();
      if (len <= 10)
	cout << s1 << endl;
      else if (len > 10)
	cout << s1[0] << len - 2 << s1[len - 1] << endl;
    }
}
