#include <iostream>
#include <string>
char function(char input);
void print(std::string text);

int main(int argc, const char * argv[])
{
	char value;
	std::cout << "Hello, World!\n";
	print("Please Enter a chararcter");
	std::cin >> value;
	std::cout << function(value) << std::endl;
	system("PAUSE"); // Not supported on mac
	return 0;
}

char function(char input)
{   //Contact me if their is an easier way to do this before I have time to look into it.
	char chararray[26];
	chararray[0] = 'a';
	chararray[1] = 'b';
	chararray[2] = 'c';
	chararray[3] = 'd';
	chararray[4] = 'e';
	chararray[5] = 'f';
	chararray[6] = 'g';
	chararray[7] = 'h';
	chararray[8] = 'i';
	chararray[9] = 'j';
	chararray[10] = 'k';
	chararray[11] = 'l';
	chararray[12] = 'm';
	chararray[13] = 'n';
	chararray[14] = 'o';
	chararray[15] = 'p';
	chararray[16] = 'q';
	chararray[17] = 'r';
	chararray[18] = 's';
	chararray[19] = 't';
	chararray[20] = 'u';
	chararray[21] = 'v';
	chararray[22] = 'w';
	chararray[23] = 'x';
	chararray[24] = 'y';
	chararray[25] = 'z';

	for (int i = 0; i < 26; i++) {
		if (input == chararray[i]) {

			if (input == 'z') {
				return 'a'; // Figuring There is no place after z, you could end the program here,
				           // I decided to loop back.
			}

			return chararray[i + 1]; // add once space to char array

		}

	}
	return '0'; // Code Modified from " return 'z'; " to " return '0'; "
}

//Hopefully making life that much easier.
void print(std::string text)
{
	std::cout << text << "\n";
}