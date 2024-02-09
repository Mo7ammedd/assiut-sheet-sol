  #include<bits/stdc++.h>
using namespace std;
int
main ()
{

  ios_base::sync_with_stdio (false);
  cin.tie (NULL);

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  int n, k = 0, i;
  cin >> n;
  char str[n];
  cin >> str;
  for (i = 0; i < n; i++)
    {
      if (str[i] != str[i + 1])
	k++;
    }
  cout << k;
}
