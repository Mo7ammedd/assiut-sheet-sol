/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   U - Some Sums.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:00:31 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 18:00:32 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int n, a, b, sum = 0;
  cin >> n >> a >> b;
  for (int i = 1; i <= n; i++)
    {
      int x = i;
      int dsum = 0;
      while (x > 0)
	{
	  int r = (x % 10);
	  dsum += r;
	  x /= 10;
	}
      if (dsum >= a && dsum <= b)
	sum = sum + i;
    }
  cout << sum << endl;
  return 0;
}
