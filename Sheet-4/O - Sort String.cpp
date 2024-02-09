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

  int ar[30], n, i, j;
  cin >> n;
  memset (ar, 0, sizeof (ar));
  for (i = 0; i < n; i++)
    {
      char ch;
      cin >> ch;
      int x = ch - 'a';
      ar[x]++;
    }
  for (i = 0; i < 30; i++)
    {
      for (j = 0; j < ar[i]; j++)
	{
	  char ch = 'a' + i;
	  cout << ch;
	}
    }
  cout << endl;
  return 0;
}
