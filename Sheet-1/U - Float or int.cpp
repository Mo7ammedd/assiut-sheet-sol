/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   U - Float or int.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:05:14 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 16:05:15 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  float x, y;
  int z;
  cin >> x;
  z = x;
  y = x - z;
  (y != 0) ? cout << "float " << z << " " << setprecision (3) << fixed << y : cout << "int " << z;
  return 0;
}
