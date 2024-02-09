  #include<bits/stdc++.h>
using namespace std;
int
main ()
{

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  int n;
  cin >> n;
  double arr[n], sum = 0;
  for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      sum += arr[i];
    }
  cout << setprecision (6) << fixed << sum / n << endl;
  return 0;
}
