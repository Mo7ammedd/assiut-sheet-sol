/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   L - GCD.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:59:37 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 17:59:48 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int x, y, k, i;
  cin >> x >> y;
  for (i = 1; i <= x; i++)
    {
      if (x % i == 0 && y % i == 0)
	k = i;
    }
  cout << k << endl;
  return 0;
}
