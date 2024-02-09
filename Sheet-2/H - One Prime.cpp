  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int n, i, a = 0;
  cin >> n;
  for (i = 2; i < n; i++)
    {
      if (n % i == 0)
	a++;
    }
  (a == 0) ? cout << "YES" << endl : cout << "NO" << endl;
  return 0;
}
