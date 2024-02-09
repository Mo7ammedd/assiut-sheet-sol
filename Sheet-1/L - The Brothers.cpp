/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   L - The Brothers.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:04:30 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 16:04:31 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
#define ll long long
int
main ()
{
  string F1, S1, F2, S2;
  cin >> F1 >> S1 >> F2 >> S2;
  int d = S1.compare (S2);
  if (d == 0)
    cout << "ARE Brothers";
  else
    cout << "NOT";
  return 0;
}
