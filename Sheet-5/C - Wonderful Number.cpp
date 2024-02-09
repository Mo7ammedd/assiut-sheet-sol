  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  int n;
  cin >> n;
  if (n % 2 == 0)
    cout << "NO" << endl;
  else
    {
      vector < int >data;
      vector < int >data1;
      int i;
      while (n > 0)
	{
	  data.push_back (n % 2);
	  data1.push_back (n % 2);
	  n = n / 2;
	}
      bool f = false;
      for (i = 0; i < data.size (); i++)
	{
	  if (data[i] != data[data.size () - 1 - i])
	    {
	      f = true;
	      break;
	    }
	}
      (f == false) ? cout << "YES" : cout << "NO";
      cout << endl;
    }
}
