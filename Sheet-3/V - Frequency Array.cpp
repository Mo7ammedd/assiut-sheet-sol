  #include<bits/stdc++.h>
using namespace std;
#define ll long long
int
main ()
{

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  int a, b;
  cin >> a >> b;
  int m[a], i, j, cnt[100005];
  for (i = 1; i <= b; i++)
    cnt[i] = 0;
  for (i = 0; i < a; i++)
    {
      cin >> m[i];
      cnt[m[i]]++;
    }
  for (i = 1; i <= b; i++)
    cout << cnt[i] << endl;
  return 0;
}
