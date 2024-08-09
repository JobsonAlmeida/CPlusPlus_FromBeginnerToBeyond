#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::ifstream in_file;
	in_file.open("./poem.txt");

	if (!in_file)
	{
		std::cerr << "Problem opening file" << std::endl;
		return 1;
	}

	/*std::string line{};
	while (std::getline(in_file, line))
	{
		std::cout << line << std::endl;
	}*/

	char c{};
	while (in_file.get(c))
	{
		std::cout << c;
	}

	in_file.close();
	return 0;

}