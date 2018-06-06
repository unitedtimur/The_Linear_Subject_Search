/*
*
*Created by UnitedTimur
*
*/

#define CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cstring>

int SearchSubjectInString(char *String, char *Subject);

int main(void)
{
	char String[255];
	
	char Subject[255];

	printf("Enter the String, please: ");
	
	gets_s(String);

	printf("Enter the Subject, please: ");
	
	gets_s(Subject);


	int Result = SearchSubjectInString(String, Subject);

	if (Result != -1) {
	
		printf("The index = %d\n", Result);
	
	}
	
	else {
		
		printf("Error #1. Try again ;(\n");
	
	}

	system("PAUSE");
	
}

int SearchSubjectInString(char *String, char *Subject) {

	int SizeSubject = strlen(Subject);

	int SizeString = strlen(String) - SizeSubject;

	int j, key;

	for (int i = 0; i < SizeString; i++) {
	
		for (key = 0, j = 0; Subject[j] && Subject[j] == String[i + j]; j++, key++); 

		if (key == SizeSubject) return i; 
	
	}

	return -1;

}
