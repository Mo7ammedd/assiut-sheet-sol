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
      int n;
      cin >> n;
      int arr[n], k, i, j, temp;
      for (i = 1; i <= n; i++)
	cin >> arr[i];
      k = arr[1] + arr[2] + 2 - 1;
      for (i = 1; i < n; i++)
	{
	  for (j = i + 1; j <= n; j++)
	    {
	      temp = arr[i] + arr[j] + j - i;
	      if (temp < k)
		{
		  k = temp;
		}
	    }
	}
      cout << k << endl;
    }
}
