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


int main() 
{ 

Boost;
#ifndef ONLINE_JUDGE
Input;
Output;
Error;
#endif

/*-----------------------START-----------------------*/



ull int n1,sum=0;
cin>>n1;
for(ull int i=1;i<=sqrt(n1);i++)
{
    if(i*i==n1)sum=sum+i;
    else if(n1%i==0)
    {
        sum=sum+i;
        sum=sum+(n1/i);
    }
}
cout<<sum<<endl;



/*------------------------END------------------------*/

time;
return 0;

} 
