/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   H - One Prime.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:59:09 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 17:59:10 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int n, i, a = 0;
  cin >> n;
  for (i = 2; i < n; i++)
    {
      if (n % i == 0)
	a++;
    }
  (a == 0) ? cout << "YES" << endl : cout << "NO" << endl;
  return 0;
}
