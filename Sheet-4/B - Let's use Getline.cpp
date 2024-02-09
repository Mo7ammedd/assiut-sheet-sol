  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  string s1;
  getline (cin, s1);
  int i = 0;
  while (s1[i] != '\\')
    {
      cout << s1[i];
      i++;
    }
}
