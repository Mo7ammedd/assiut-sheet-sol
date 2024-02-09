  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  long long int n, sum = 0;
  cin >> n;
  long long int a[n];
  for (long long int i = 0; i < n; i++)
    {
      cin >> a[i];
      sum = sum + a[i];
    }
  cout << abs (sum) << endl;
}
