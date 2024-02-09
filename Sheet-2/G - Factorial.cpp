  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  long long int n, i, a;
  cin >> n;
  while (n--)
    {
      long long int sum = 1;
      cin >> a;
      for (i = 1; i <= a; i++)
	sum = sum * i;
      cout << sum << endl;
    }
  return 0;
}
