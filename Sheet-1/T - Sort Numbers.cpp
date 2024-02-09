/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   T - Sort Numbers.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:05:09 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 16:05:10 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int temp, a, b, c, x, y, z;
  cin >> a >> b >> c;
  x = a;
  y = b;
  z = c;
  if (a > b)
    {
      temp = a;
      a = b;
      b = temp;
    }
  if (a > c)
    {
      temp = a;
      a = c;
      c = temp;
    }
  if (b > c)
    {
      temp = b;
      b = c;
      c = temp;
    }
  cout << a << endl << b << endl << c << endl << endl << x << endl << y <<
    endl << z << endl;
}
