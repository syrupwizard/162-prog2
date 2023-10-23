//austin huerta on 10/19/23
//CS 162
//This program will take input from the user in the form of a string, then compare the string with
//predetermined phrases within the program to create acronyms within the string from the user.
//

#include <cctype>
#include <cstring>
#include <iostream>

using namespace std;

const int MAX_STR = 51;

//function prototypes
void welcome() {


}
void getString(char longString[], int &size) {
	char stringPrompt[] = {"Enter phrase: "};

	cout << stringPrompt;
	cin.get(longString,MAX_STR, '\n');
	cin.ignore(100,'\n'); 

	cout << "Your string reads: " << longString << endl;

	size = strlen(longString);
}

void cleanString(char longString[], int &size) {
  
	for(int i = 0; i < size; ++i) {
		longString[i] = tolower(longString[i]);
	}

}

void copyString(char copy[], char shortString[], int &index)
{
//	char tempString[];
	//strcat(shortString, copy);
	strcpy(shortString+strlen(shortString), copy);

}


void findString(char longString[], char shortString[],int &index, int &size)
{
	char phrase1[] = "looking for group";
	if(strncmp(longString +index,phrase1, strlen(phrase1))==0)
	{	
		char copy[] = "lfg";	
		copyString(copy, shortString,index);		
		cout << "string found!" << endl;
		index+= strlen(phrase1);	

	}
}

void findNums(char longString[], char shortString[],int &index, int &size)
{
	char one[] = "one";
	char two[] = "two";
	char three[] = "three";
	char four[] = "four";
	char five[] = "five";
	char six[] = "six";
	char seven[] = "seven";
	char eight[] = "eight";
	char nine[] = "nine";
	char ten[] = "ten";
	
	int sumMatch = 0;
//	if(strncmp(longString +index,one, strlen(one))==0)
	for(int i = 0; i <= strlen(one); ++i)
	{	
		sumMatch = (longString[i+index] - one[i]);
	}
	if(sumMatch == 0)
	{
		char copy[] = "1";	
		copyString(copy, shortString,index);		
		cout << "string found!" << endl;
		index += strlen(one);	
	}

}
void copyUntilSpace()
{
}
void printString() {


}


int main() {
	char longString[MAX_STR];
	char shortString[MAX_STR];
	int size = 0;
	int indexLong = 0;
	int indexShort = 0;
	

	getString(longString, size);

	cout << "size of user string: " << size << endl;
	cleanString(longString, size);
	// create individual index per array
	int i = 0;
	char ch[2];
	
	while(i < size)
	{	
		findString(longString,shortString,i, size);

		findNums(longString, shortString,i, size);

		cout << "index : " << i << endl;
		ch[0] = longString[i];
		cout << "ch: " << ch[0] << endl;
		strcat(shortString, ch);

		i++;
	}


	cout << "longString : " << longString << endl;
	cout << "shortString: " << shortString << endl;

	//do
	
  


	//while
	return 0;

}

void UNUSEDfindPhrase(int &indexWord1, int &indexWord2, char longString[], int &size)
{
	char ch;
	bool wordFound = false;
	int indexWord = 0; 
	if(indexWord1 >= indexWord2)
		indexWord = indexWord1;
	else
	{
		indexWord = indexWord2;
	}
	for(int i = indexWord; i < size; ++i)
	{
		ch = longString[i];

		if(isspace(ch) && !wordFound)
		{
			if(indexWord1 <= indexWord2)
				indexWord1 = i;
			else
			{
				indexWord2 = i;
			}
			wordFound = true;
			
			cout << "indexword in loop:" << indexWord << endl;
		}
	}
	

/*	findPhrase(indexWord1,indexWord2, longString,size);
	cout << "First word index: " << indexWord1 << endl;
	strncpy(word1, longString+0,indexWord1);
	cout << word1 << endl;
	
	indexWord1++;
	findPhrase(indexWord1,indexWord2, longString, size);
	cout << " Second word index: " << indexWord2 << endl;
	strncpy(word2,longString+indexWord1,(indexWord2 - indexWord1));

	cout << "second word:  " << word2 << endl;	
*/
}

