#include <iostream>
#include <string>
#include "caesar.h"
#include "solve.h"

int main()
{
	std::string str = encryptCaesar("The Song of Achilles", 3);
	std::cout << "Encrypted Text: " << str << std::endl;


	solve(str);	
	return 0;
}
