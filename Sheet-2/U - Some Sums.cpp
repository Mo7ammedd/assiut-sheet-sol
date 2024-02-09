  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int n, a, b, sum = 0;
  cin >> n >> a >> b;
  for (int i = 1; i <= n; i++)
    {
      int x = i;
      int dsum = 0;
      while (x > 0)
	{
	  int r = (x % 10);
	  dsum += r;
	  x /= 10;
	}
      if (dsum >= a && dsum <= b)
	sum = sum + i;
    }
  cout << sum << endl;
  return 0;
}
