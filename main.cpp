#include <iostream>
#include <string>
#include "caesar.h"
#include "solve.h"

int main()
{
	std::string str = encryptCaesar("the song of achilles", 3);
	std::cout << "Encrypted Text: " << str << std::endl;


	std::cout << "Decrypted Text: " << solve(str) << std::endl;	
	return 0;
}
