  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int n, i, j;
  cin >> n;
  for (i = n; i > 0; i--)
    {
      for (j = 0; j < i; j++)
	cout << "*";
      cout << "\n";
    }
}
