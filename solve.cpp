#include <iostream>
#include <string>
#include <cmath>
#include <vector>

std::string solve(std::string encrypted_string) {
	std::vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	std::vector<int> letters(26);
	for (int i = 0; i < letters.size(); i++ ) {
		letters[i] = 0; //initializing the value
	}
	
	for (int i = 0; i < encrypted_string.length(); i++) {
		for(int j = 0; j < alphabet.size(); j++) {
			if (encrypted_string[i] == alphabet[j]) {
				letters[j]++;
			}
		}
	}

	for (int i = 0; i < letters.size(); i++) { //prints the frequency of the letters
		std::cout << alphabet[i] << ": " << letters[i] << std::endl;
	}


	return "";
}
