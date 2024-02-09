/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   W - Mathematical Expression.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:05:21 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 16:05:22 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int a, b, c;
  char s, q;
  cin >> a >> s >> b >> q >> c;
  if (s == '+' || s == '-' || s == '*')
    {
      if (s == '+' && q == '=')
	(a + b == c) ? cout << "Yes" : cout << a + b;
      else if (s == '-')
	(a - b == c) ? cout << "Yes" : cout << a - b;
      else if (s == '*')
	(a * b == c) ? cout << "Yes" : cout << a * b;
    }
  return 0;
}
