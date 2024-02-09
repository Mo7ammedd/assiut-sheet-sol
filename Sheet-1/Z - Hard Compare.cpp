/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Z - Hard Compare.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:03:14 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 16:03:15 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





  #include <bits/stdc++.h>
using namespace std;
int
main ()
{
  double A, B, C, D;
  cin >> A >> B >> C >> D;
  double i = B * log (A);
  double j = D * log (C);
  if (i > j)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
