//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define PB push_back
#define MP make_pair
#define vi vector<int>
#define vs vector<string>
#define ST string
#define F first
#define S Second
#define Input freopen("input.txt", "r", stdin)
#define Output freopen("output.txt", "w", stdout)
#define Error freopen("error.txt", "w", stderr)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define time cerr<<"Time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl
using namespace std;

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
  if (n >= 0)
    {
      cout << n << endl;
      return 0;
    }
  else
    {
      int k = n / 10;
      int rem = abs (n % 10);
      stringstream tapatap;
      tapatap << (n);
      string s = tapatap.str ();
      s.pop_back ();
      s.pop_back ();
      s.PB (rem + '0');
      if (s == "-0")
	{
	  cout << 0 << endl;
	  return 0;
	}
      stringstream geek (s);
      int intr;
      geek >> intr;
      if (intr < k)
	cout << k << endl;
      else
	cout << intr << endl;

    }



/*------------------------END------------------------*/

  time;
  return 0;

}
