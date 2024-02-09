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

ull int
mod (string num, ull int a)
{

  unsigned long long int res = 0;
  for (int i = 0; i < num.size (); i++)
    res = (res * 10 + (int) num[i] - '0') % a;
  return res;
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



  string n;
  ull x;
  cin >> n >> x;
  if (mod (n, x) == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;



/*------------------------END------------------------*/

  time;
  return 0;

}
