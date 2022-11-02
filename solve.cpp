#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <vector>

int capital(char c) {
	if(c >= 65 && c <= 90) { //cap
		return c + 32;
	}
	return c;
}

double distance(int x1, int y1, int x2, int y2) { //finds distance formula 
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

std::string solve(std::string encrypted_string) {
	std::vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	std::vector<int> letters(26);
	for (int i = 0; i < letters.size(); i++ ) {
		letters[i] = 0; //initializing the value
	}
	
	for (int i = 0; i < encrypted_string.length(); i++) { //finding freq of each letter
		for(int j = 0; j < alphabet.size(); j++) {
			if (encrypted_string[i] == alphabet[j]) {
				letters[j]++;
			}
		}
	}
	
	//file
	std::vector<int> file(26);
	for (int i = 0; i < file.size(); i++) {
		file[i] = 0; //initializing the value
        }

	std::ifstream in_file("The_Song_of_Achilles.txt");

	std::string line;
	while(getline(in_file, line)) {
		for (int i = 0; i < line.length(); i++) {
                	for(int j = 0; j < alphabet.size(); j++) {
                        	if (capital(line[i]) == alphabet[j]) {
                                	file[j]++;
                        	}
                	}
        	}	
	}

	/*for (int i = 0; i < file.size(); i++) { //prints the frequency of the letters
		std::cout << alphabet[i] << ": " << file[i] << std::endl;
	}*/

	//finding smallest distance
	double d;
	string decrypted;
	for (int i = 0; i < letter.size(); i++) {
		for (int j = 0; j < file.size(); j++) {
			double distance = distance(letter[i], file[i]);
			if (distance < d) {
				d = distance;
			}
		}
	}
	
	

	return decrypted;
}
