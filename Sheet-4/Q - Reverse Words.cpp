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

  vector < string > data;
  string str;
  while (cin >> str)
    data.push_back (str);
  for (int i = 0; i < data.size (); i++)
    reverse (data[i].begin (), data[i].end ());
  for (int i = 0; i < data.size () - 1; i++)
    cout << data[i] << " ";
  cout << data[data.size () - 1];
}
