  #include <bits/stdc++.h>
using namespace std;
int
main ()
{
  int N, M;
  cin >> N >> M;
  int Ar[N][M];
  for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < M; j++)
	cin >> Ar[i][j];
    }
  for (int i = 0; i < N; i++)
    {
      for (int j = M - 1; j >= 0; j--)
	cout << Ar[i][j] << " ";
      cout << endl;
    }
  return 0;
}
