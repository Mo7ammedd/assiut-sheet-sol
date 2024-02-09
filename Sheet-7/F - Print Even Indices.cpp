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
solve (int arr[], int n)
{
  if (n <= 0)
    return;
  cout << arr[n - 2] << " ";
  return solve (arr, n - 2);
}

void
solve1 (int arr[], int n)
{
  if (n <= 0)
    return;
  cout << arr[n - 1] << " ";
  return solve (arr, n - 1);
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


  int n, i;
  cin >> n;
  int arr[n];
  for (i = 0; i < n; i++)
    cin >> arr[i];
  if (n % 2 == 1)
    solve1 (arr, n);
  else
    solve (arr, n);


/*------------------------END------------------------*/

  time;
  return 0;

}
