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

  char str[1000000];
  scanf ("%[^\n]", &str);
  char *token = strtok (str, " ,!.?");
  int i;
  vector < string > data;
  while (token != NULL)
    {
      data.push_back (token);
      token = strtok (NULL, " ,!.?");
    }
  cout << data.size ();
}
