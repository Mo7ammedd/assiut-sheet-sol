/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   M - Capital or Small or Digit.cpp                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:04:34 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 16:04:35 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
#define ll long long
int
main ()
{
  char ch;
  cin >> ch;
  if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
      cout << "ALPHA\n";
      if (ch >= 'A' && ch <= 'Z')
	cout << "IS CAPITAL\n";
      else if (ch >= 'a' && ch <= 'z')
	cout << "IS SMALL\n";
    }
  else if (ch >= '0' && ch <= '9')
    cout << "IS DIGIT";
  return 0;
}
