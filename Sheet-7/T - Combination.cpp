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
#define time cerr<<"Time taken :"<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl
using namespace std;

ull int
nCr (ull int n, ull int r)
{
  if (r == 0 || r == n)
    return 1;
  return nCr (n - 1, r - 1) + nCr (n - 1, r);
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


  ull int n, r;
  cin >> n >> r;
  if (r > n)
    {
      cout << 0;
      return 0;
    }
  cout << nCr (n, r);


/*------------------------END------------------------*/

  time;
  return 0;

}
