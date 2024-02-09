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

  string str1, str2;
  cin >> str1 >> str2;
  if (str1.compare (str2) < 0)
    cout << str1;
  else if (str1.compare (str2) == 0)
    cout << str2;
  else if (str1.compare (str2) > 0)
    cout << str2;
}
