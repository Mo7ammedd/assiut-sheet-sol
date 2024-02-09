  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int t;
  cin >> t;
  while (t--)
    {
      int a;
      cin >> a;
      if (a >= 0 && a <= 9)
	cout << a << "\n";
      else
	{
	  while (a != 0)
	    {
	      cout << a % 10 << " ";
	      a = a / 10;
	    }
	  cout << "\n";
	}
    }
}
