/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   F - Digits Summation.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:04:05 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 16:04:06 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.141592653
int
main ()
{
  ll int A, B, X, Y;
  cin >> X >> Y;
  A = X % 10;
  B = Y % 10;
  cout << A + B;
  return 0;
}
