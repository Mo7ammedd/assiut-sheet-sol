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

  int t;
  cin >> t;
  while (t--)
    {
      int n;
      cin >> n;
      int arr[n], i, s, e, k, z = 0;
      for (i = 0; i < n; i++)
	cin >> arr[i];
      for (s = 0; s < n; s++)
	{
	  for (e = s; e < n; e++)
	    {
	      vector < int >data;
	      for (k = s; k <= e; k++)
		data.push_back (arr[k]);
	      for (i = 0; i < (int) data.size () - 1; i++)
		{
		  if (data[i] > data[i + 1])
		    {
		      i--;
		      break;
		    }
		}
	      if (i == (int) data.size () - 1)
		z++;
	      data.erase (data.begin (), data.end ());
	    }
	}
      cout << z << '\n';
    }
}
