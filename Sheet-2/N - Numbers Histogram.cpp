/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   N - Numbers Histogram.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:59:59 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 18:00:00 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  char ch;
  int n, i;
  cin >> ch >> n;
  int arr[n];
  for (i = 0; i < n; i++)
    cin >> arr[i];
  int p = 0;
  while (n--)
    {
      for (i = 0; i < arr[p]; i++)
	cout << ch;
      cout << "\n";
      p++;
    }
}
