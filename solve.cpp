#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <vector>
#include "caesar.h"

int capital(char c) {
	if(c >= 65 && c <= 90) { //cap
		return c + 32;
	}
	return c;
}

void print(std::vector<double> vec) {
	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec[i] << std::endl;
	}
}

std::vector<double> shift(std::vector<double> vec, int shift) {
	std::vector<double> output(vec.size());
	for (int i = 0; i < vec.size(); i++) {
		output[i] = shiftChar(vec[i], shift);
	}
	
	return output;
}


/*double distance() {
	
}*/

std::string solve(std::string encrypted_string) {
	std::vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	std::vector<double> letters(26);
	std::vector<double> file(26);

	for (int i = 0; i < letters.size(); i++ ) {
		file[i] = 0.0;
		letters[i] = 0.0; //initializing the values
	}
	
	int letters_count = 0;
	for (int i = 0; i < encrypted_string.length(); i++) {
		for(int j = 0; j < alphabet.size(); j++) {
			if (capital(encrypted_string[i]) == alphabet[j]) {
				letters[j]++;
				letters_count++;
			}
		}
	}

	for(int i = 0; i < letters.size(); i++) { //getting freq
		letters[i] = letters[i]/letters_count;
	}	
	
	std::ifstream in_file("The_Song_of_Achilles.txt");

	int file_count = 0;
	std::string line;
	while(getline(in_file, line)) {
		for (int i = 0; i < line.length(); i++) {
                	for(int j = 0; j < alphabet.size(); j++) {
                        	if (capital(line[i]) == alphabet[j]) {
                                	file[j]++;
					file_count++;
                        	}
                	}
        	}	
	}

	for (int i = 0; i < file.size(); i++) { //freq
		file[i] = file[i]/file_count;
	}
	
	print(letters);
	print(file);
	std::vector<double> 

	//finding smallest distance
	double d;
	std::string decrypted;
	for (int i = 0; i < letters.size(); i++) {
		for (int j = 0; j < file.size(); j++) {
			/*double distance = distance(letter[i], file[i]);
			if (distance < d) {
				d = distance;
			}*/
		}
	}
	
	return decrypted;
}
