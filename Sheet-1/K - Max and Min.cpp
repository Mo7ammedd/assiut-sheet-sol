/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   K - Max and Min.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:04:26 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 16:04:27 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
#define ll long long
int
main ()
{
  int a, b, c, temp;
  cin >> a >> b >> c;
  if (a > b)
    {
      temp = a;
      a = b;
      b = temp;
    }
  if (a > c)
    {
      temp = a;
      a = c;
      c = temp;
    }
  if (b > c)
    {
      temp = b;
      b = c;
      c = temp;
    }
  cout << a << " " << c << endl;
  return 0;
}
