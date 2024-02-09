  #include<bits/stdc++.h>
using namespace std;
int
main ()
{

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  int a, b, c;
  cin >> a >> b >> c;
  int arr[6];
  arr[0] = a + (b * c);
  arr[1] = a * (b + c);
  arr[2] = a * b * c;
  arr[3] = (a + b) * c;
  arr[4] = (a * b) + c;
  arr[5] = a + b + c;
  sort (arr, arr + 6);
  cout << arr[5] << endl;
}
