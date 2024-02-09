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

bool
vowel (char s)
{
  if (s == 'A' || s == 'a' || s == 'e' || s == 'E' || s == 'i' || s == 'I'
      || s == 'o' || s == 'O' || s == 'u' || s == 'U')
    return true;
  return false;
}

void
solve (ST str, int k)
{
  if (str.size () == 0)
    {
      cout << k << endl;
      return;
    }
  if (vowel (str[str.size () - 1]))
    {
      str.pop_back ();
      return solve (str, k + 1);
    }
  str.pop_back ();
  return solve (str, k);
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


  ST str;
  int k = 0;
  getline (cin, str);
  solve (str, k);


/*------------------------END------------------------*/

  time;
  return 0;

}
