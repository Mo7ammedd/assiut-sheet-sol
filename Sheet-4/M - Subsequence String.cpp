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

  string str;
  cin >> str;
  string str2 = "hello";
  int i = 0, k = 0;
  while (i < str.size ())
    {
      if (str[i] == str2[k])
	{
	  k++;
	  i++;
	}
      else
	i++;
    }
  if (k == str2.size ())
    cout << "YES";
  else
    cout << "NO";
}
