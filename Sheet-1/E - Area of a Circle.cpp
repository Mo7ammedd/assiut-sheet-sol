/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   E - Area of a Circle.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:03:58 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 16:03:59 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.141592653
int
main ()
{
  float a, area;
  cin >> a;
  area = PI * pow (a, 2);
  cout << fixed << setprecision (9) << area;
}
