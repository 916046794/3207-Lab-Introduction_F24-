char randchar(){
	int asciiIndex = 0;
	int asciiCode = 0;
	char returnChar;

	asciiIndex = rand() % ((25+1-0) + 0);
	//getting a random number between 0-25 that I can use for ASCII code uppercase letters

	asciiCode = asciiIndex+65;
	returnChar = asciiCode;
	//adding said index to the base ASCII for A of 65, then typecasting
	
	//printf("%c", returnChar);

	return returnChar;
}