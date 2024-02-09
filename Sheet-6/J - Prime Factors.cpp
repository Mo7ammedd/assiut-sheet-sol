//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define PB push_back
#define MP make_pair
#define vi vector<int>
#define vs vector<string>
#define S string
#define Input freopen("input.txt", "r", stdin)
#define Output freopen("output.txt", "w", stdout)
#define Error freopen("error.txt", "w", stderr)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define time cerr<<"Time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl
using namespace std;
void
primeFactors (int n)
{
  vector < pair < int, int >>data;
  int c = 0;
  while (n % 2 == 0)
    {
      c++;
      n = n / 2;
    }
  if (c != 0)
    data.PB (MP (2, c));
  for (int i = 3; i <= sqrt (n); i = i + 2)
    {
      c = 0;
      while (n % i == 0)
	{
	  c++;
	  n = n / i;
	}
      if (c != 0)
	data.PB (MP (i, c));
    }
  if (n > 2)
    data.PB (MP (n, 1));
  for (int j = 0; j < data.size () - 1; j++)
    cout << "(" << data[j].first << "^" << data[j].second << ")" << "*";
  cout << "(" << data[data.size () - 1].first << "^" << data[data.size () -
							     1].second << ")";
}

int
main ()
{

  Boost;
#ifndef ONLINE_JUDGE
  Input;
  Output;
  Error;
#endif

/*-----------------------START-----------------------*/


  int n;
  cin >> n;
  primeFactors (n);
  return 0;


/*------------------------END------------------------*/

  time;
  return 0;

}
