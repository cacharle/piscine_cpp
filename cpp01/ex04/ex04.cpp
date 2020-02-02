/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 12:43:03 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/02 12:43:06 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string &ref_s = s;
	std::string *ptr_s = &s;

	std::cout << ref_s << std::endl;
	std::cout << *ptr_s << std::endl;
	return 0;
}