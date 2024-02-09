#include<bits/stdc++.h>
using namespace std;
int
main ()
{
  string s1;
  getline (cin, s1);
  int i, sum = 0;
  for (i = 0; i < s1.size (); i++)
    sum += s1[i] - '0';
  cout << sum << endl;
}
