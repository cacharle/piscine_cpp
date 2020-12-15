/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 20:25:44 by charles           #+#    #+#             */
/*   Updated: 2020/12/15 11:38:16 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main()
{
    std::cout << "==================== DEFAULT" << std::endl;
    Array<int> a;
    std::cout << a.size() << std::endl;
    try                      { std::cout << a[0] << std::endl;     }
    catch (std::exception e) { std::cout << e.what() << std::endl; }

    std::cout << "==================== LENGTH" << std::endl;
    Array<int> b(3);
    std::cout << b.size() << std::endl;
    std::cout << b[0] << ", " << b[1] << ", " << b[2] << std::endl;
    b[0] = 1;
    b[1] = 2;
    b[2] = 3;
    int const& ref1 = b[0];
    (void)ref1;
    std::cout << b[0] << ", " << b[1] << ", " << b[2] << std::endl;
    try                      { std::cout << b[3] << std::endl;     }
    catch (std::exception e) { std::cout << e.what() << std::endl; }

    std::cout << "==================== LENGTH" << std::endl;
    Array<float> c(3);
    std::cout << c.size() << std::endl;
    std::cout << c[0] << ", " << c[1] << ", " << c[2] << std::endl;
    c[0] = 1.3;
    c[1] = 2.2;
    c[2] = 3.1;
    float const& ref2 = c[0];
    (void)ref2;
    std::cout << c[0] << ", " << c[1] << ", " << c[2] << std::endl;
    try                      { std::cout << c[3] << std::endl;     }
    catch (std::exception e) { std::cout << e.what() << std::endl; }

    std::cout << "==================== COPY" << std::endl;
    Array<float> d(c);
    std::cout << d.size() << std::endl;
    d[0] = 10.12;
    float const& ref3 = d[0];
    (void)ref3;
    std::cout << d[0] << " | " << c[0] << std::endl;
    std::cout << d[1] << " | " << c[1] << std::endl;
    std::cout << d[2] << " | " << c[2] << std::endl;

    std::cout << "==================== ASSIGNMENT" << std::endl;
    Array<float> f(10);
    std::cout << f.size() << std::endl;
    f = c;
    std::cout << f.size() << std::endl;
    f[0] = 10.12;
    std::cout << f[0] << " | " << c[0] << std::endl;
    std::cout << f[1] << " | " << c[1] << std::endl;
    std::cout << f[2] << " | " << c[2] << std::endl;
}
