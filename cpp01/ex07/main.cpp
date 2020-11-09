/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 17:08:28 by cacharle          #+#    #+#             */
/*   Updated: 2020/11/09 11:22:46 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " filename s1 s2" << std::endl;
		return 1;
	}

	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
    if (filename.empty() || s1.empty() || s2.empty())
    {
		std::cerr << "Error: filename, s1 and s2 should not be empty" << std::endl;
		return 1;
    }

	std::ifstream file(filename);
	std::ofstream outfile(filename + ".replace");
	if (!file.is_open())
	{
		std::cerr << "Could not open " << filename;
		return 1;
	}
	if (!outfile.is_open())
	{
		std::cerr << "Could not create " << filename << ".replace";
		return 1;
	}

	std::string line;
	while (std::getline(file, line))
	{
		while (true)
		{
			size_t i = line.find(s1);
			if (i == std::string::npos)
				break;
			line.replace(i, s1.length(), s2);
		}
		outfile << line << std::endl;
	}
	file.close();
	outfile.close();
    return 0;
}
