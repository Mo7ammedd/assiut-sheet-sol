/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   G - Summation from 1 to N.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:04:10 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 16:04:11 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
#define ll long long
int
main ()
{
  ll int x, n;
  cin >> n;
  x = (n * (n + 1)) / 2;
  cout << x << endl;
  return 0;
}
