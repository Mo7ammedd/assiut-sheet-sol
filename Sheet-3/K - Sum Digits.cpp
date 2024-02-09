  #include<bits/stdc++.h>
#define EPS 1e5
using namespace std;
int
main ()
{
  int n, i, sum = 0;
  cin >> n;
  int arr[n], min = arr[0];;
  for (i = 0; i < n; i++)
    {
      scanf ("%1d", &arr[i]);
      sum = sum + arr[i];
    }
  cout << sum << endl;
}
