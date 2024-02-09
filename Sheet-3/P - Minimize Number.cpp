  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int a, i, j = 0, count = 0;
  cin >> a;
  int z = a;
  vector < int >b;
  while (z--)
    {
      int z;
      cin >> z;
      b.push_back (z);
    }
  while (j == 0)
    {
      for (int i = 0; i < a; i++)
	{
	  if (b[i] % 2 == 0)
	    b[i] = b[i] / 2;
	  else
	    {
	      j = 1;
	      break;
	    }
	}
      count++;
    }
  (count == 1) ? cout << 0 : cout << count - 1;
  cout << endl;
  return 0;
}
