  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int n, i;
  cin >> n;
  if (n == 0 || n == 1 || n == -1)
    cout << -1 << endl;
  else if (n < 1 || n > 1)
    {
      for (i = 2; i <= n; i += 2)
	cout << i << endl;
    }
  return 0;
}
