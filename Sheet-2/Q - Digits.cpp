/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Q - Digits.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:00:12 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 18:00:13 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int t;
  cin >> t;
  while (t--)
    {
      int a;
      cin >> a;
      if (a >= 0 && a <= 9)
	cout << a << "\n";
      else
	{
	  while (a != 0)
	    {
	      cout << a % 10 << " ";
	      a = a / 10;
	    }
	  cout << "\n";
	}
    }
}
