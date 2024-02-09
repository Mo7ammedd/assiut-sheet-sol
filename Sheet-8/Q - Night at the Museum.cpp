  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  char str[100];
  cin >> str;
  int sum = 0, i;
  char ch = 'a';
  for (i = 0; str[i] != '\0'; i++)
    {
      int x = abs (ch - str[i]);
      int y = 26 - x;
      if (x > y)
	sum = sum + y;
      else
	sum = sum + x;
      ch = str[i];
    }
  cout << sum;
}
