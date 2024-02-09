  #include<bits/stdc++.h>
#define EPS 1e5
using namespace std;
int
main ()
{
  int x;
  cin >> x;
  int i, j, temp, arr[x];
  for (i = 0; i < x; i++)
    cin >> arr[i];
  for (i = 0; i < x; i++)
    {
      for (j = 0; j < x - i - 1; j++)
	{
	  if (arr[j] > arr[j + 1])
	    {
	      temp = arr[j];
	      arr[j] = arr[j + 1];
	      arr[j + 1] = temp;
	    }
	}
    }
  for (i = 0; i < x; i++)
    cout << arr[i] << " ";
}
