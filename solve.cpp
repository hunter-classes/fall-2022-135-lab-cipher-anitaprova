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

std::vector<double> file_freq() { //sets the file freq
	std::vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	std::vector<double> file(26);
	
	for (int i = 0; i < file.size(); i++ ) {
                file[i] = 0.0; //initializing the values
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

        for (int i = 0; i < file.size(); i++) {
                file[i] = file[i]/file_count;
        }
	return file;
}

std::vector<double> freq(std::string str) { //makes a vector and gives the freq of the string 
	std::vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	std::vector<double> letters(26);
	
	for (int i = 0; i < letters.size(); i++ ) {
                letters[i] = 0.0; //initializing the values
        }

        int letters_count = 0; //counting
        for (int i = 0; i < str.length(); i++) {
                for(int j = 0; j < alphabet.size(); j++) {
                        if (capital(str[i]) == alphabet[j]) {
                                letters[j]++;
                                letters_count++;
                        }
                }
        }

        for(int i = 0; i < letters.size(); i++) { //getting freq
                letters[i] = letters[i]/letters_count;
        }
	return letters;
}

void print(std::vector<double> vec) {
	std::cout << "BEG" << std::endl;
	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec[i] << std::endl;
	}
	std::cout << "END" << std::endl;
}

std::vector<double> shift(std::string str, int shift) {
	std::string output; //first shift the encrypted string
	output = encryptCaesar(str, shift);	
	std::vector<double> vec = freq(output); //then get the frequency of the shifted vector
	
	return vec;
}

double distance(std::vector<double> v1, std::vector<double> v2) { //distance between two vectors 
	double distance = 0.0; 
	for (int i = 0; i < v1.size(); i++) {
		distance += pow(v2[i] - v1[i], 2); // get all distance first
	}
	return sqrt(distance);
}

std::string solve(std::string encrypted_string) {
	std::vector<double> encrypted = freq(encrypted_string);
	std::vector<double> file = file_freq();
	
	print(encrypted);
	//print(file);
	
	double d = 0.0;

	for (int i = 0; i < 25; i++) {
		
		
	}
	
	
	return decrypted;
}
