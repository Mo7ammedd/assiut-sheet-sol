/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   F - Multiplication table.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:59:00 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 17:59:01 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int n, i;
  cin >> n;
  for (i = 1; i <= 12; i++)
    cout << n << " * " << i << " = " << n * i << endl;
  return 0;
}
