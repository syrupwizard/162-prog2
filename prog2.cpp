//austin huerta on 10/19/23
//CS 162
//This program will take input from the user in the form of a string, then compare the string with
//predetermined phrases within the program to create acronyms within the string from the user.
//

#include <cctype>
#include <cstring>
#include <iostream>
#include <iomanip>

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

void findPhrase() {


}

int writeString() {

return 1;
}

void printString() {


}
int main() {
  char longString[MAX_STR];
  int size = 0;
  getString(longString, size);
  
  cout << "size of user string: " << size << endl;
  cleanString(longString, size);

  cout << longString << endl;

  //do
  


  //while
  return 0;


}

