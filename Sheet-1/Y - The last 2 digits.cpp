/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Y - The last 2 digits.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:05:31 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 16:05:32 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  long long int a, b, c, d, p, q, r, s, x;
  cin >> a >> b >> c >> d;
  p = a % 100;
  q = b % 100;
  r = c % 100;
  s = d % 100;
  x = (p * q * r * s) % 100;
  if (x >= 1 && x <= 9)
    cout << "0" << x;
  else if (x == 0)
    cout << "00";
  else
    cout << x;
  return 0;
}
