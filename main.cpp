#include <iostream>
#include <string>
#include "caesar.h"
#include "solve.h"

int main()
{
	std::string str = encryptCaesar("the song of achilles", 3);
	std::cout << "Encrypted Text: " << str << "\nDecrypted Text: " << solve(str) << std::endl;	
	
	
	
	std::string str2 = encryptCaesar("It's making you cry every time You give your love to me this way Saying you'd wait for me to stay I know it hurts you But I need to tell you something My heart just can't be faithful for long I swear I'll only make you cry", 15);
	std::cout << "Encrypted Text: " << str2 << "\nDecrypted Text: " << solve(str2) << std::endl;	
	
	return 0;
}
