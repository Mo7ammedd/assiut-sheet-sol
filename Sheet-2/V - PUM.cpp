  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int a, count = 0, i, j;
  cin >> a;
  for (i = 1; i <= a * 4; i++)
    {
      if (i % 4 == 0 && i >= 4)
	{
	  cout << "PUM" << endl;
	  i++;
	}
      if (i <= 4 * a)
	cout << i << " ";
    }
  return 0;
}
