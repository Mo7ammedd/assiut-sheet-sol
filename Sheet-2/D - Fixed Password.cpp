/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D - Fixed Password.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:58:50 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 17:58:52 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int n, k = 1;
  while (k != 0)
    {
      cin >> n;
      if (n == 1999)
	{
	  cout << "Correct" << endl;
	  k--;
	}
      else
	cout << "Wrong" << endl;
    }
  return 0;
}
