/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   G - Factorial.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:59:04 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 17:59:05 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  long long int n, i, a;
  cin >> n;
  while (n--)
    {
      long long int sum = 1;
      cin >> a;
      for (i = 1; i <= a; i++)
	sum = sum * i;
      cout << sum << endl;
    }
  return 0;
}
