  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  char ch;
  int n, i;
  cin >> ch >> n;
  int arr[n];
  for (i = 0; i < n; i++)
    cin >> arr[i];
  int p = 0;
  while (n--)
    {
      for (i = 0; i < arr[p]; i++)
	cout << ch;
      cout << "\n";
      p++;
    }
}
