/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   V - Comparison.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:05:17 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 16:05:18 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int a, b;
  char s;
  cin >> a >> s >> b;
  if (s == '<')
    (a < b) ? cout << "Right" : cout << "Wrong";
  else if (s == '>')
    (a > b) ? cout << "Right" : cout << "Wrong";
  else if (s == '=')
    (a == b) ? cout << "Right" : cout << "Wrong";
  return 0;
}
