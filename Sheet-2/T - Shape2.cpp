  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int n;
  cin >> n;
  int i, j, k = 1;
  while (n--)
    {
      for (j = 1; j <= n; j++)
	cout << " ";
      for (i = 0; i < k; i++)
	cout << "*";
      k = k + 2;
      cout << "\n";
    }
}
