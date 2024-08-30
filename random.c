#include <time.h>
#include <stdlib.h>

char randchar(){
	int asciiCode = 0;
	char returnChar;

	srand(time(NULL));
	//seeding it so that it's truly random
	asciiCode = rand() % ((25+1-0) + 0);
	//getting a random number between 0-25 that I can use for ASCII code uppercase letters
	returnChar = asciiCode+65;

	return returnChar;
}