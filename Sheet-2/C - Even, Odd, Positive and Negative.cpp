/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C - Even, Odd, Positive and Negative.cpp           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:58:47 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 17:58:48 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int n, i, p = 0, neg = 0, e = 0, o = 0;
  cin >> n;
  int arr[n];
  for (i = 0; i < n; i++)
    {
      cin >> arr[i];
      if (arr[i] > 0)
	p++;
      if (arr[i] < 0)
	neg++;
      if (arr[i] % 2 == 0)
	e++;
      if (arr[i] % 2 != 0)
	o++;
    }
  cout << "Even: " << e << endl;
  cout << "Odd: " << o << endl;
  cout << "Positive: " << p << endl;
  cout << "Negative: " << neg << endl;
  return 0;
}
