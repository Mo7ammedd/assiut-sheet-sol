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
solve (ll int arr[], ll int n, ll int sum, int m)
{
  if (m == 0)
    {
      cout << sum << endl;
      return;
    }
  sum = sum + arr[n - 1];
  return solve (arr, n - 1, sum, m - 1);
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


  ll int n, m;
  cin >> n >> m;
  ll int arr[n], i, sum = 0;
  for (i = 0; i < n; i++)
    cin >> arr[i];
  solve (arr, n, sum, m);


/*------------------------END------------------------*/

  time;
  return 0;

}
