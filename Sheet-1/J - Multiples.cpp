/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   J - Multiples.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:04:21 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 16:04:22 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
#define ll long long
#include<stdio.h>
int
main ()
{
  int a, b;
  cin >> a >> b;
  if (a % b == 0)
    cout << "Multiples\n";
  else if (b % a == 0)
    cout << "Multiples\n";
  else
    cout << "No Multiples\n";
  return 0;
}
