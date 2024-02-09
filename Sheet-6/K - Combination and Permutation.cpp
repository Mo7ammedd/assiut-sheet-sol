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
fact (ull int n)
{
  if (n <= 1)
    return 1;
  return n * fact (n - 1);
}

ull int
nCr (ull int n, ull int r)
{
  return fact (n) / (fact (r) * fact (n - r));
}

ull int
nPr (ull int n, ull int r)
{
  return fact (n) / fact (n - r);
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
  cout << nCr (n, r);
  cout << " ";
  cout << nPr (n, r);



/*------------------------END------------------------*/

  time;
  return 0;

}
