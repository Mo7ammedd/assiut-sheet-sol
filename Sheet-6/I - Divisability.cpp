//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define pb push_back
#define mp make_pair
#define pob pop_back
#define in insert
#define vi vector<int>
#define vs vector<string>
#define pii pair<int,int>
#define psi pair<string,int>
#define pis pair<int,string>
#define mii map<int,int>
#define msi map<string,int>
#define mis map<int,string>
#define S string
#define fi first
#define se second
#define sp " "
#define dl "\n"
#define all(data) data.begin(),data.end()
#define b() begin()
#define e() end()
#define DDD fprintf(stderr, "====TESTING====\n")
#define FOR() for(auto it=data.begin();it!=data.end();it++)
#define Input freopen("/home/mozahed/Documents/Love/input.txt", "r", stdin)
#define Output freopen("/home/mozahed/Documents/Love/output.txt", "w", stdout)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define time cerr<<"Time : "<<(float)clock()/CLOCKS_PER_SEC<<" s"<<endl
#define maxx 100005
#define EPS 1e-9;
using namespace std;
const double PI = acos (-1);


int
main ()
{

  Boost;
#ifndef ONLINE_JUDGE
  Input;
  Output;
#endif

/*-----------------------START-----------------------*/


  int a, b, x;
  cin >> a >> b >> x;
  if (a > b)
    swap (a, b);
  if (a % x != 0)
    {
      int p = (a / x) + 1;
      a = p * x;
    }
  b = (b / x);
  b = b * x;
  if (a == b)
    cout << a << endl;
  else
    {
      int n = ((b - a) / x) + 1;
      ll int sum;
      sum = (n - 1) * x;
      sum = (2 * a) + sum;
      sum = (n * sum) / 2;
      cout << sum << dl;
    }


/*------------------------END------------------------*/

  time;
  return 0;

}
