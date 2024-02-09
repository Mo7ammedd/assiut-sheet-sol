/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   M - Lucky Numbers.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:59:54 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 17:59:55 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int a, b, i, rem, p = 0;
  cin >> a >> b;
  for (i = a; i <= b; i++)
    {
      int n = i, j = 0, k = 0;
      while (n != 0)
	{
	  rem = n % 10;
	  if (rem == 4 || rem == 7)
	    k++;
	  n = n / 10;
	  j++;
	}
      if (k == j)
	{
	  cout << i << " ";
	  p++;
	}
    }
  if (p == 0)
    cout << "-1";
}
