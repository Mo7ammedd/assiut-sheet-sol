  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int n, k = 1, i, t, p = 0;
  cin >> n;
  int arr[n];
  t = n;
  while (t--)
    {
      cin >> arr[p];
      p++;
    }
  for (i = 0; i < n - 1; i++)
    {
      if (arr[i] != arr[i + 1])
	k++;
    }
  cout << k << "\n";
}
