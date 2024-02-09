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

  string str1 =
    "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
  string str2 =
    "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  int n;
  string str;
  cin >> n >> str;
  if (n == 1)
    {
      for (int i = 0; i < str.size (); i++)
	{
	  int pos = str2.find (str[i]);
	  str[i] = str1[pos];
	}
    }
  else
    {
      for (int i = 0; i < str.size (); i++)
	{
	  int pos = str1.find (str[i]);
	  str[i] = str2[pos];
	}
    }
  cout << str;
}
