/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   N - Char.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:04:38 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 16:04:39 by Mo7ammedd        ###   ########.fr       */
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
  if (ch >= 'A' && ch <= 'Z')
    {
      ch = tolower (ch);
      cout << ch;
    }
  else if (ch >= 'a' && ch <= 'z')
    {
      ch = toupper (ch);
      cout << ch;
    }
  return 0;
}
