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

  vector < char >data;
  char input;
  int e = 0, g = 0, p = 0, y = 0, t = 0;
  while (cin >> input)
    {
      data.push_back (input);
    }
  for (int i = 0; i < data.size (); i++)
    {
      if (data[i] == 'e' || data[i] == 'E')
	e++;
      else if (data[i] == 'g' || data[i] == 'G')
	g++;
      else if (data[i] == 'y' || data[i] == 'Y')
	y++;
      else if (data[i] == 'p' || data[i] == 'P')
	p++;
      else if (data[i] == 't' || data[i] == 'T')
	t++;
    }
  vector < int >data1;
  data1.push_back (e);
  data1.push_back (g);
  data1.push_back (y);
  data1.push_back (p);
  data1.push_back (t);
  cout << *min_element (data1.begin (), data1.end ());
}
