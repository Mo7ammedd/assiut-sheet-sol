  #include <bits/stdc++.h>
using namespace std;
int
main ()
{

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  string str1, str2;
  cin >> str1 >> str2;
  int i = 0, count = 1;
  for (int j = 0; j < str2.size (); j++)
    {
      if (str1[i] == str2[j])
	{
	  count++;
	  i++;
	}
    }
  cout << count << endl;
}
