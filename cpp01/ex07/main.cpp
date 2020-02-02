/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 17:08:28 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/02 18:00:25 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " filename s1 s2";
		return 1;
	}
	std::string filename(argv[1]);
	std::string find_str(argv[2]);
	std::string replace_str(argv[3]);

	std::ifstream file(filename);
	std::ofstream outfile(filename + ".replace");
	if (!file)
	{
		std::cerr << "Could not open " << filename;
		outfile.close();
		return 1;
	}
	if (!outfile)
	{
		std::cerr << "Could not create " << filename << ".replace";
		file.close();
		return 1;
	}
	std::string line;
	while (std::getline(file, line))
	{
		while (true)
		{
			size_t i = line.find(find_str);
			if (i == std::string::npos)
				break;
			line.replace(i, find_str.length(), replace_str);
		}
		outfile << line << std::endl;
	}
	file.close();
	outfile.close();
}
