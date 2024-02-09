  #include<bits/stdc++.h>
#define EPS 1e5
using namespace std;
int
main ()
{
  int c = 0, i, j, n;
  cin >> n;
  int ar[n];
  for (i = 0; i < n; i++)
    {
      cin >> ar[i];
    }
  int mini = ar[0];
  for (i = 0; i < n; i++)
    {
      if (mini > ar[i])
	{
	  mini = ar[i];
	}
    }
  for (i = 0; i < n; i++)
    {
      if (ar[i] == mini)
	c++;
    }
  (c % 2 == 0) ? cout << "Unlucky" : cout << "Lucky";
  return 0;
}
