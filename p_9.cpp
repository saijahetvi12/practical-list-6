//Reading from a text file test.txt using C++ FileStream Programming.
//220130318026
//saija hetvi
#include <iostream>
#include <fstream>
#include <string>
int main() 
{
    std::ifstream file("dsu.txt");

    if (!file.is_open()) 
	{
        std::cerr << "Failed to open the file" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) 
	{
	        std::cout << line << std::endl;
    }

    file.close();

    return 0;
}

