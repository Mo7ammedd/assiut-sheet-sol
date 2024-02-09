/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   O - Calculator.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:04:42 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 16:04:43 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
#define ll long long
int
main ()
{
  int a, b;
  char s;
  cin >> a >> s >> b;
  if (s == '+')
    cout << a + b;
  else if (s == '-')
    cout << a - b;
  else if (s == '*')
    cout << a * b;
  else if (s == '/')
    cout << a / b;
  return 0;
}
