//Bismillahir Rahmanir Rahim
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
  int len1 = str1.size ();
  int len2 = str2.size ();

  if (len1 != len2)
    {
      if (len1 > len2)
	cout << len1;
      else
	cout << len2;
    }
  else
    {

      if (str1.compare (str2) == 0)
	cout << "-1";
      else
	{
	  if (str1.compare (str2) >= 0)
	    cout << len1;
	  else
	    cout << len2;
	}
    }
}
