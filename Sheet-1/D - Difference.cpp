/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D - Difference.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:03:55 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 16:03:56 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
#define ll long long
int
main ()
{
  ll int X, A, B, C, D;
  cin >> A >> B >> C >> D;
  X = (A * B) - (C * D);
  cout << "Difference = " << X;
  return 0;
}
