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


  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  cout << setprecision (9) << fixed << sqrt (pow (x2 - x1, 2) +
					     pow (y2 - y1, 2)) << dl;


/*------------------------END------------------------*/

  time;
  return 0;

}
