//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include<string.h>
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

int val (char c)
{
  if (c >= '0' && c <= '9')
    return (int) c - '0';
  else
    return (int) c - 'A' + 10;
}

ll int toDeci (S str, int base)
{
  ll int len = str.size ();
  ll int power = 1;
  ll int num = 0;
  ll int i;
  for (i = len - 1; i >= 0; i--)
    {
      num += val (str[i]) * power;
      power = power * base;
    }

  return num;
}

char reVal (int num)
{
  if (num >= 0 && num <= 9)
    return (char) (num + '0');
  else
    return (char) (num - 10 + 'A');
}

void strev (S str)
{
  int len = str.size ();
  int i;
  for (i = 0; i < len / 2; i++)
    {
      char temp = str[i];
      str[i] = str[len - i - 1];
      str[len - i - 1] = temp;
    }
}

S fromDeci (char res[], int base, ll int inputNum)
{
  S re;
  int index = 0;
  while (inputNum > 0)
    {
      res[index++] = reVal (inputNum % base);
      inputNum /= base;
    }
  for (int i = index - 1; i >= 0; i--)
    re.pb (res[i]);
  return re;
}

int main ()
{

  Boost;
#ifndef ONLINE_JUDGE
  Input;
  Output;
  Error;
#endif

/*-----------------------START-----------------------*/



  int t, x;
  S n;
  cin >> t >> n >> x;

  if (t == 1)
    cout << toDeci (n, x) << dl;
  else
    {
      char res[100];
      stringstream geek (n);
      ll int intr;
      geek >> intr;
      cout << fromDeci (res, x, intr) << dl;
    }



/*------------------------END------------------------*/

  time;
  return 0;

}
