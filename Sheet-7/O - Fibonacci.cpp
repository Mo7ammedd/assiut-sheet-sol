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

void
solve (int n, int t1, int t2, int next)
{
  if (n == 0)
    {
      cout << next;
      return;
    }
  next = t1 + t2;
  solve (n - 1, t2, next, next);
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


  int n, t1 = 0, t2 = 1, next = 1, i;
  cin >> n;
  if (n == 1)
    {
      cout << 0;
      return 0;
    }
  if (n == 2)
    {
      cout << 1;
      return 0;
    }
  solve (n - 2, t1, t2, next);


/*------------------------END------------------------*/

  time;
  return 0;

}
