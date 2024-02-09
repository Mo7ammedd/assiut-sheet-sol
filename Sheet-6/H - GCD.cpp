  #include <bits/stdc++.h>
using namespace std;
int
main ()
{

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  unsigned long long int a, b;
  cin >> a >> b;
  unsigned long long int gcd = __gcd (a, b);
  unsigned long long int lcm = (a / gcd) * b;
  cout << gcd << " " << lcm << endl;
}
