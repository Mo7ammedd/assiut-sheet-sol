/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   H - Two numbers.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:04:14 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 16:04:15 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
#define ll long long
int
main ()
{
  float a, b, c, d, e, f;
  cin >> a >> b;
  c = a / b;
  d = floor (c);
  e = ceil (c);
  f = round (c);
  cout << setprecision (0) << fixed << "floor " << a << " / " << b << " = " <<
    d << endl;
  cout << setprecision (0) << fixed << "ceil " << a << " / " << b << " = " <<
    e << endl;
  cout << setprecision (0) << fixed << "round " << a << " / " << b << " = " <<
    f << endl;
  return 0;
}
