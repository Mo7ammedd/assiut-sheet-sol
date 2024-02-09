  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int n, d = 0, s = 0, i;
  cin >> n;
  int arr[n];
  for (i = 0; i < n; i++)
    cin >> arr[i];
  int p = n, j = 0;
  for (i = 0; i < p; i++)
    {
      if (i % 2 == 0)
	{
	  if (arr[j] < arr[n - 1])
	    {
	      s = s + arr[n - 1];
	      n--;
	    }
	  else
	    {
	      s = s + arr[j];
	      j++;
	    }
	}
      else
	{
	  if (arr[j] < arr[n - 1])
	    {
	      d = d + arr[n - 1];
	      n--;
	    }
	  else
	    {
	      d = d + arr[j];
	      j++;
	    }
	}
    }
  cout << s << " " << d;
}
