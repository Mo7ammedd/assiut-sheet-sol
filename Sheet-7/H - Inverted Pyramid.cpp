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
space (int n)
{
  if (n == 0)
    return;
  cout << " ";
  return space (n - 1);
}


void
star (int n)
{
  if (n == 0)
    return;
  cout << '*';
  return star (n - 1);
}

void
solve (int n, int num)
{
  if (n == 0)
    return;
  space (num - n);
  star (n * 2 - 1);
  cout << endl;
  return solve (n - 1, num);
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
  solve (n, n);


/*------------------------END------------------------*/

  time;
  return 0;

}
