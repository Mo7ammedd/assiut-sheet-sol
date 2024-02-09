/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   R - Sequence of Numbers and Sum.cpp                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:00:16 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 18:00:17 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int n, m, i;
  while (cin >> n >> m && !(n <= 0 || m <= 0))
    {
      if (m > n)
	swap (n, m);
      int sum = 0;
      for (i = m; i <= n; i++)
	{
	  cout << i << " ";
	  sum = sum + i;
	}
      cout << "sum =" << sum << "\n";
    }
}
