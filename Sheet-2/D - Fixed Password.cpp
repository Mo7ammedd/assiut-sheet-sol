  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int n, k = 1;
  while (k != 0)
    {
      cin >> n;
      if (n == 1999)
	{
	  cout << "Correct" << endl;
	  k--;
	}
      else
	cout << "Wrong" << endl;
    }
  return 0;
}
