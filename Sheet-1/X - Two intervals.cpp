/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   X - Two intervals.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:05:26 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 16:05:27 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  long long int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a < c && d > b && b > c)
    cout << c << " " << b << endl;
  else if (a > c && b > d && b > c && a < d)
    cout << a << " " << d << endl;
  else if (c > a && b > d && b > c)
    cout << c << " " << d << endl;
  else if (a > c && b < d && b > c)
    cout << a << " " << b << endl;
  else if (a == c && b == d)
    cout << a << " " << b << endl;
  else if (a > c && a > d && b > c)
    cout << "-1" << endl;
  else if (a < c && a < d && b < c)
    cout << "-1" << endl;
  else if (b == c && c == d)
    cout << c << " " << d << endl;
  else if (a < c && b > c && b == d)
    cout << c << " " << d << endl;
  else if (a == c && a < d && b > d)
    cout << c << " " << d << endl;
  else if (a == c && c == d)
    cout << c << " " << d;
  else if (a < c && b == c)
    cout << b << " " << c << endl;
  else if (a > c && a == d)
    cout << a << " " << d << endl;
  else if (a > c && b == d)
    cout << a << " " << b << endl;
  else if (a == c && b < d)
    cout << a << " " << b << endl;
  else if (a > c && b > c && a > d && b > d)
    cout << "-1" << endl;
  return 0;
}
