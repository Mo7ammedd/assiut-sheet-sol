  #include<bits/stdc++.h>
using namespace std;
int
main ()
{

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  int n, k = 0, i;
  cin >> n;
  int a[n], b[n];
  for (i = 0; i < n; i++)
    cin >> a[i];

  for (i = 0; i < n; i++)
    cin >> b[i];
  sort (a, a + n);
  sort (b, b + n);
  for (i = 0; i < n; i++)
    {
      if (a[i] != b[i])
	{
	  k++;
	  break;
	}
    }
  if (k == 0)
    cout << "yes" << "\n";
  else
    cout << "no" << "\n";
}
