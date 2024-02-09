  #include<bits/stdc++.h>
using namespace std;
void
decToBinary (int n)
{
  vector < int >data;
  int i;
  int dec_value = 0;
  int base = 1;
  while (n > 0)
    {
      if (n % 2 == 1)
	data.push_back (n % 2);
      n = n / 2;
    }
  for (i = 0; i < data.size (); i++)
    {
      dec_value += data[i] * base;
      base = base * 2;
    }
  cout << dec_value << endl;
}

int
main ()
{

  ios_base::sync_with_stdio (false);
  cin.tie (NULL);

#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  while (t--)
    {
      int n;
      cin >> n;
      decToBinary (n);
    }
}
