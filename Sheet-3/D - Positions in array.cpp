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
    cin >> arr[i];
  for (i = 0; i < x; i++)
    {
      if (arr[i] <= 10)
	cout << "A[" << i << "] = " << arr[i] << endl;
    }
}
