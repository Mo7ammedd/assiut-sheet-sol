  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int x, y, k, i;
  cin >> x >> y;
  for (i = 1; i <= x; i++)
    {
      if (x % i == 0 && y % i == 0)
	k = i;
    }
  cout << k << endl;
  return 0;
}
