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



  int r1, c1, r2, c2, i, j, k;
  cin >> r1 >> c1;
  int a[r1][c1];
  for (i = 0; i < r1; ++i)
    for (j = 0; j < c1; ++j)
      cin >> a[i][j];


  cin >> r2 >> c2;
  int b[r2][c2], mult[r1][c2];
  for (i = 0; i < r2; ++i)
    for (j = 0; j < c2; ++j)
      cin >> b[i][j];


  for (i = 0; i < r1; ++i)
    for (j = 0; j < c2; ++j)
      mult[i][j] = 0;


  for (i = 0; i < r1; ++i)
    for (j = 0; j < c2; ++j)
      for (k = 0; k < c1; ++k)
	mult[i][j] += a[i][k] * b[k][j];


  for (i = 0; i < r1; ++i)
    for (j = 0; j < c2; ++j)
      {
	cout << mult[i][j] << " ";
	if (j == c2 - 1)
	  cout << endl;
      }



/*------------------------END------------------------*/

  time;
  return 0;

}
