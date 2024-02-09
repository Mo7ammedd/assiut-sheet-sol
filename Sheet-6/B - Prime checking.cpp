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
#define time cerr<<"Time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl;
using namespace std;
bool
prime (ull int n)
{
  if (n == 1)
    return false;
  else if (n == 2)
    return true;
  else if (n % 2 == 0)
    return false;
  else
    {
      int c = 0;
      for (int i = 3; i <= sqrt (n); i++)
	{
	  if (n % i == 0)
	    {
	      c++;
	      break;
	    }
	}
      if (c == 0)
	return true;
      else
	return false;
    }

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

  ull int n;
  cin >> n;
  (prime (n)) ? cout << "YES" : cout << "NO";
  cout << endl;
  time;

}
