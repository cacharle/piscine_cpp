#include <iostream>
#include <cctype>

// not sure
// char
// ft_toupper(char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		return (c ^ 0b00100000);
// 	return (c);
// }

int
main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j]; j++)
			argv[i][j] = toupper(argv[i][j]);
		std::cout << argv[i];
	}
	std::cout << std::endl;
	return 0;
}
