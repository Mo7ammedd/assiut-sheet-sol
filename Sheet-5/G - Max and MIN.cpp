  #include <bits/stdc++.h>
using namespace std;
void
display (int a[], int n)
{
  int i;
  int max = a[0];
  int min = a[1];
  for (int i = 0; i < n; i++)
    {
      if (max < a[i])
	max = a[i];
      if (min > a[i])
	min = a[i];
    }
  cout << min << " " << max;
}

int
main ()
{
  int n, i;
  cin >> n;
  int num[n];
  for (i = 0; i < n; i++)
    cin >> num[i];
  display (num, n);
}
