  #include<bits/stdc++.h>
using namespace std;
int
prime (vector < int >v)
{
  int i, k = 0, j;
  for (i = 0; i < v.size (); i++)
    {
      if (v[i] == 1)
	continue;
      if (v[i] == 2)
	{
	  k++;
	  continue;
	}
      int d = 0;
      for (j = 2; j <= sqrt (v[i]); j++)
	{
	  if (v[i] % j == 0)
	    d++;
	  if (d == 1)
	    break;
	}
      if (d == 0)
	k++;
    }
  return k;
}

int
pali (vector < int >v)
{
  int p = 0;
  int k = 0, i, j;
  for (i = 0; i < v.size (); i++)
    {
      vector < int >data;
      while (v[i])
	{
	  data.push_back (v[i] % 10);
	  v[i] = v[i] / 10;
	}
      bool f = false;
      for (j = 0; j < data.size (); j++)
	{
	  if (data[j] != data[data.size () - 1 - j])
	    {
	      f = true;
	      break;
	    }
	}
      if (f == false)
	k++;
    }
  return k;
}

int
divi (vector < int >v)
{
  int i, j, max = 0, k = v[0];
  for (i = 0; i < v.size (); i++)
    {
      int dibi = 0;
      for (j = 1; j <= v[i]; j++)
	{
	  if (v[i] % j == 0)
	    dibi++;
	}
      if (dibi > max || (dibi == max && k < v[i]))
	{
	  max = dibi;
	  k = v[i];
	}
    }
  return k;
}

int
main ()
{

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  vector < int >v;
  int n;
  cin >> n;
  int in, k = 0, i;
  while (n--)
    {
      cin >> in;
      v.push_back (in);
    }
  sort (v.begin (), v.end ());
  cout << "The maximum number : " << v[v.size () - 1] << endl;
  cout << "The minimum number : " << v[0] << endl;
  cout << "The number of prime numbers : " << prime (v) << endl;
  cout << "The number of palindrome numbers : " << pali (v) << endl;
  cout << "The number that has the maximum number of divisors : " << divi (v)
    << endl;
}
