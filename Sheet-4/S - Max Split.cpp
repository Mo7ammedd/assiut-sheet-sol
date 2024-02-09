  #include<bits/stdc++.h>
using namespace std;
string a;
int
main ()
{
  int r = 0;
  int l = 0;
  int k;
  int count = 0;
  bool x = true;
  getline (cin, a);
  for (int i = 0; a[i]; i++)
    {
      if (a[i] == 'L')
	l++;
      else
	r++;
      if (l == r)
	{
	  count++;
	  l = 0;
	  r = 0;
	}
    }
  cout << count << endl;
  for (int i = 0; a[i]; i++)
    {
      if (a[i] == 'L')
	l++;
      else
	r++;
      if (l == r)
	{
	  if (x == true)
	    {
	      for (int j = 0; j <= i; j++)
		cout << a[j];
	      x = false;
	      cout << endl;
	    }
	  else
	    {
	      for (int j = k; j <= i; j++)
		cout << a[j];
	      cout << endl;
	    }
	  k = i + 1;
	  l = 0;
	  r = 0;
	}
    }
  return 0;
}
