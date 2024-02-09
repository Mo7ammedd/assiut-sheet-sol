/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   S - Interval.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:05:03 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 16:05:04 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  double x;
  cin >> x;
  if (x >= 0 && x <= 25)
    cout << "Interval [0,25]\n";
  else if (x > 25 && x <= 50)
    cout << "Interval (25,50]\n";
  else if (x > 50 && x <= 75)
    cout << "Interval (50,75]\n";
  else if (x > 75 && x <= 100)
    cout << "Interval (75,100]\n";
  else
    cout << "Out of Intervals\n";
  return 0;
}
