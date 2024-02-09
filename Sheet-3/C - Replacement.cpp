  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif
  int x;
  cin >> x;
  int arr[x], i;
  for (i = 0; i < x; i++)
    {
      cin >> arr[i];
      if (arr[i] < 0)
	arr[i] = 2;
      else if (arr[i] > 0)
	arr[i] = 1;
    }
  for (i = 0; i < x; i++)
    cout << arr[i] << " ";
}
