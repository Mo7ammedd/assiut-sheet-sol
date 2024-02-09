  #include<bits/stdc++.h>
#define EPS 1e5
using namespace std;
int
main ()
{
  int t;
  cin >> t;
  while (t--)
    {
      int n, s, k, e, l = 0, max, i;
      cin >> n;
      int ar[n];
      for (int i = 0; i < n; i++)
	cin >> ar[i];
      for (s = 0; s < n; s++)
	{
	  for (e = s; e < n; e++)
	    {
	      int arr2[n - s];
	      i = 0;
	      for (k = s; k <= e; k++)
		{
		  arr2[i] = ar[k];
		  i++;
		}
	      cout << arr2[max_element (arr2, arr2 + i) - arr2] << " ";
	    }
	}
      cout << "\n";
    }
}
