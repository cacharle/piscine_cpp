/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 12:43:03 by cacharle          #+#    #+#             */
/*   Updated: 2020/11/09 10:59:22 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string* ptr_s = &s;
	std::string& ref_s = s;

	std::cout << *ptr_s << std::endl;
	std::cout << ref_s  << std::endl;
	return 0;
}
