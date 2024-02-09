  #include<bits/stdc++.h>
using namespace std;
int
main ()
{

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  vector < int >v;
  int n;
  cin >> n;
  int in;
  int k = n;
  while (n--)
    {
      cin >> in;
      v.push_back (in);
    }
  vector < int >::iterator ip;
  sort (v.begin (), v.end ());
  ip = unique (v.begin (), v.begin () + k);
  v.resize (distance (v.begin (), ip));
  cout << v.size ();
  return 0;
}
