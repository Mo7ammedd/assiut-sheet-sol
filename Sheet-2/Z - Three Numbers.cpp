/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Z - Three Numbers.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:00:54 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 18:00:55 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int k, s, x, count = 0;
  cin >> k >> s;
  for (int i = 0; i <= k; i++)
    {
      for (int j = 0; j <= k; j++)
	{
	  x = s - (i + j);
	  if ((x >= 0) && x <= k && ((x + i + j) == s))
	    count++;
	}
    }
  cout << count;
  return 0;
}
