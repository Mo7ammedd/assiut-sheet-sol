  #include<bits/stdc++.h>
using namespace std;
int
main ()
{

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  int i;
  string str;
  cin >> str;
  sort (str.begin (), str.end ());
  for (i = 0; i < (int) str.size (); i++)
    {
      cout << str[i] << " : ";
      int k = 1;
      while (str[i] == str[i + 1])
	{
	  i++;
	  k++;
	}
      cout << k << "\n";
    }
}
