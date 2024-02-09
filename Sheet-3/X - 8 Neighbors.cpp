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
#define all data.begin(),data.end()
#define b() begin()
#define e() end()
#define FOR() for(auto it=data.begin();it!=data.end();it++)
#define Input freopen("input.txt", "r", stdin)
#define Output freopen("output.txt", "w", stdout)
#define Error freopen("error.txt", "w", stderr)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define time cerr<<"Time : "<<(float)clock()/CLOCKS_PER_SEC<<" s"<<endl
using namespace std;


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


  int n, m, i, j, x, y, cnt = 0;
  char a[105][105];
  cin >> n >> m;
  for (i = 1; i <= n; i++)
    {
      for (j = 1; j <= m; j++)
	cin >> a[i][j];
    }
  cin >> x >> y;
  int r[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
  int c[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
  for (i = 0; i < 8; i++)
    {
      int nr = x + r[i];
      int nc = y + c[i];
      int k = 0;
      if (nr <= 0 || nr > n || nc <= 0 || nc > m)
	k++;
      if (k == 0)
	{
	  if (a[nr][nc] != 'x')
	    cnt++;
	}

    }
  if (cnt == 0)
    cout << "yes" << endl;
  else
    cout << "no" << endl;
  return 0;


/*------------------------END------------------------*/

  time;
  return 0;

}
