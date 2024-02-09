//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int n, i, p, q, max, min;
  cin >> n;
  int arr[n];
  for (i = 0; i < n; i++)
    cin >> arr[i];
  max = min = arr[0];
  for (i = 0; i < n; i++)
    {
      if (arr[i] < min)
	min = arr[i];
      if (arr[i] > max)
	max = arr[i];
    }
  for (i = 0; i < n; i++)
    {
      if (arr[i] == max)
	arr[i] = min;
      else if (arr[i] == min)
	arr[i] = max;
    }
  for (i = 0; i < n; i++)
    cout << arr[i] << " ";
}
