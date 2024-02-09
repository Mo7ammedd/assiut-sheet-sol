  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int a, b, i, rem, p = 0;
  cin >> a >> b;
  for (i = a; i <= b; i++)
    {
      int n = i, j = 0, k = 0;
      while (n != 0)
	{
	  rem = n % 10;
	  if (rem == 4 || rem == 7)
	    k++;
	  n = n / 10;
	  j++;
	}
      if (k == j)
	{
	  cout << i << " ";
	  p++;
	}
    }
  if (p == 0)
    cout << "-1";
}
