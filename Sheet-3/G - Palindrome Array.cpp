  #include<bits/stdc++.h>
#define EPS 1e5
using namespace std;
int
main ()
{
  int n;
  cin >> n;
  int arr[n], arr2[n], i, x = n, k = 0;
  for (i = 0; i < n; i++)
    {
      x--;
      cin >> arr[i];
      arr2[x] = arr[i];
    }
  for (i = 0; i < n; i++)
    {
      if (arr[i] != arr2[i])
	{
	  k++;
	  cout << "NO" << endl;
	  break;
	}
    }
  if (k == 0)
    cout << "YES" << endl;
}
