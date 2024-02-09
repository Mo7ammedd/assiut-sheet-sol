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
  int in, k = 0, i;
  while (n--)
    {
      cin >> in;
      if (in == 0)
	{
	  k++;
	  continue;
	}
      v.push_back (in);
    }
  for (i = 0; i < v.size (); i++)
    cout << v[i] << " ";
  while (k--)
    cout << 0 << " ";
}
