/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   T - Shape2.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:00:27 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 18:00:28 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int n;
  cin >> n;
  int i, j, k = 1;
  while (n--)
    {
      for (j = 1; j <= n; j++)
	cout << " ";
      for (i = 0; i < k; i++)
	cout << "*";
      k = k + 2;
      cout << "\n";
    }
}
