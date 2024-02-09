/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   E - Max.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:58:55 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 17:58:56 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int n, i;
  cin >> n;
  int arr[n];
  for (i = 0; i < n; i++)
    cin >> arr[i];
  int max = arr[0];
  for (i = 0; i < n; i++)
    {
      if (arr[i] > max)
	max = arr[i];
    }
  cout << max << endl;
  return 0;
}
