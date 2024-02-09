  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int n, i, j;
  cin >> n;
  for (i = 2; i <= n; i++)
    {
      int k = 1;
      for (j = 2; j < i; j++)
	{
	  if (i % j == 0)
	    k++;
	}
      if (k == 1)
	cout << i << " ";
    }
}
