  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  long long int n, t1 = 0, t2 = 1, next, i;
  cin >> n;
  if (n == 1)
    cout << t1;
  else if (n == 2)
    cout << t2;
  else
    {
      for (i = 3; i <= n; i++)
	{
	  next = t1 + t2;
	  t1 = t2;
	  t2 = next;
	}
      cout << next;
    }
}
