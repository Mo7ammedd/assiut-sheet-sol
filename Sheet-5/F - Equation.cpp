  #include <bits/stdc++.h>
using namespace std;

long long int power (int x, int n)
{
  long long int i, result = 0;
  for (i = 2; i <= n; i += 2)
    {
      long long int pow = 1, j;
      for (j = 0; j < i; j++)
	{
	  pow = pow * x;
	}
      result = result + pow;
    }
  return result;
}

int
main ()
{
  long long int x, n;
  cin >> x >> n;
  long long int power (int x, int n);
  cout << power (x, n);
}
