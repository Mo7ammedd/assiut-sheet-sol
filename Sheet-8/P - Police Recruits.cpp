  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int n, k = 0, i, p = 0;
  cin >> n;
  int arr[n];
  for (i = 0; i < n; i++)
    cin >> arr[i];
  for (i = 0; i < n; i++)
    {
      if (arr[i] != -1)
	{
	  p = p + arr[i];
	  arr[i] = 0;
	}
      while (p != 0)
	{
	  if (arr[i] == -1)
	    {
	      arr[i] = 0;
	      p--;
	    }
	  break;
	}
    }
  for (i = 0; i < n; i++)
    {
      if (arr[i] == -1)
	k++;
    }
  cout << k;
}
