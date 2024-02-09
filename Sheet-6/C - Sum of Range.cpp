//Bismillahir Rahmanir Rahim
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
#define time cerr<<"Time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl
using namespace std;

ull int
sum1 (int a, int b)
{
  ull int d = 1;
  ull int n = b - a;
  ull int sum = (2 * a) + (n * d);
  n++;
  sum = n * sum;
  sum = sum / 2;
  return sum;
}

ull int
sum2 (int a, int b)
{
  ull int d = 2;
  if (a % 2 == 1)
    a++;
  if (b % 2 == 1)
    b--;
  ull int n = (b - a) / 2;
  ull int sum = (2 * a) + (n * d);
  n++;
  sum = n * sum;
  sum = sum / 2;
  return sum;
}

ull int
sum3 (int a, int b)
{
  ull int d = 2;
  if (a % 2 == 0)
    a++;
  if (b % 2 == 0)
    b--;
  ull int n = (b - a) / 2;
  ull int sum = (2 * a) + (n * d);
  n++;
  sum = n * sum;
  sum = sum / 2;
  return sum;
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



  ull int a, b;
  cin >> a >> b;
  if (a > b)
    swap (a, b);
  cout << sum1 (a, b) << endl;
  cout << sum2 (a, b) << endl;
  cout << sum3 (a, b) << endl;



/*------------------------END------------------------*/

  time;
  return 0;

}
