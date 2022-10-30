#include <iostream>
#include <string>

char shiftChar(char c, int rshift){
	if( (c >= 65 && c <= 90) || (c >= 97 && c <= 122) ) {
		for(int i = 0; i < rshift; i++){
			if(c == 90) { //goes back to the start 
				c = 65;
			}
			else if(c == 122){ //goes back to the start
				c = 97;
			}
			else {
				c++;
			}
		}
	}
	
	return c;
}

std::string encryptCaesar(std::string plaintext, int rshift){
	std::string encrypt_text;
	for(int i = 0; i < plaintext.size(); i++) {
		encrypt_text += shiftChar(plaintext[i], rshift);
	}

	return encrypt_text;
}
