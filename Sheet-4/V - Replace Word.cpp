  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  ios_base::sync_with_stdio (false);
  cin.tie (NULL);
#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
//freopen("output.txt","w",stdout);
#endif

  vector < char >data;
  char input;
  while (cin >> input)
    data.push_back (input);
  for (int i = 0; i < data.size (); i++)
    {
      if (data[i] == 'E' && data[i + 1] == 'G' && data[i + 2] == 'Y'
	  && data[i + 3] == 'P' && data[i + 4] == 'T')
	{
	  i = i + 4;
	  cout << " ";
	  continue;
	}
      cout << data[i];
    }
}
