//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int
main ()
{
    
#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  int n, i, coder = 0, coder1 = 0, coder2 = 0;
  cin >> n;
  int arr[n];
  for (i = 0; i < n; i++)
    {
      cin >> arr[i];
      if (arr[i] == 1)
	coder++;
      else if (arr[i] == 2)
	coder1++;
      else if (arr[i] == 3)
	coder2++;
    }
  int min = coder;
  if (coder1 < min)
    min = coder1;
  if (coder2 < min)
    min = coder2;
  cout << min << "\n";
  while (min--)
    {
      int k = 1;
      i = 0;
      for (i = 0; i < n; i++)
	{
	  if (arr[i] == 0)
	    continue;
	  if (arr[i] == k)
	    {
	      cout << i + 1 << " ";
	      arr[i] = 0;
	      i = -1;
	      k++;
	    }
	  if (k == 4)
	    {
	      cout << "\n";
	      break;
	    }
	}
    }
}
