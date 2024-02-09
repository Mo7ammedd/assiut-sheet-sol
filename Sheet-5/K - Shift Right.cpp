  #include<bits/stdc++.h>
using namespace std;
int
main ()
{

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  int n, x;
  cin >> n >> x;
  int arr[n], arr2[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  for (int i = 0; i < n; i++)
    {
      int a = (x + i) % n;
      arr2[a] = arr[i];
    }
  for (int i = 0; i < n; i++)
    cout << arr2[i] << " ";
  return 0;
}
