/*

Chris Trombley
CECS 130-02
3/11/19
This program is a phone book with add, show, 
delete, sort, find by name(first or last), select random, 
and delete all at the same time features and lets the user 
store all data locally so it is saved for later user.

*/


//import needed packages
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//declare needed vars
int userInput;
int numOfEntries;
int position;


//struct to store phonebook entries
typedef struct {
	
	char fName[30];
	char lName[30];
	char number[20];
	
} entry;


//prototype our functions
void showPhonebook(entry*);
void addFriend(entry*);
void deleteFriend(entry*);
void sortNames(entry*);
void findNumByName(entry*);
void selectRandom(entry*);
void deleteAll(entry*);
void saveToFile(entry*);
void retrieveFromFile(entry*);


//main function
int main() {
	
	numOfEntries = 0;
	
	//allocate memory for phonebook
	entry *phonebookEntry;
	phonebookEntry = (entry*)malloc(1*sizeof(entry));
	
	userInput = 10;
	
	//while loop to keep program running
	while(userInput != 0) {
	
	printf("%s", "\nAdd friend 1\n");
	printf("%s", "Delete friend 2\n");
	printf("%s", "Show phone 3\n");
	printf("%s", "Sort names alphabetically 4\n");
	printf("%s", "Find phone number by name 5\n");
	printf("%s", "Select random number to call 6\n");
	printf("%s", "Delete all 7\n");
	printf("%s", "Save to file 8\n");
	printf("%s", "Retrieve from file 9\n");
	printf("%s", "0 to exit\n");
	printf("%s", "Enter choice: ");
	scanf("%i", &userInput);
	
	//switch statement to handlde menu
	switch(userInput) {
		case 1:
			numOfEntries++;
			if(numOfEntries > 1) {
				//handle memory as needed
				
				phonebookEntry = realloc(phonebookEntry, numOfEntries*sizeof(entry));
				
				if(phonebookEntry==NULL) {
					
					printf("%s", "out of memory");
					
				}
			} else if(numOfEntries == 1) {
				
						phonebookEntry = (entry*)malloc(numOfEntries*sizeof(entry));
						
			}
			addFriend(phonebookEntry);
			break;
		case 2:
			deleteFriend(phonebookEntry);
			break;
		case 3:
			showPhonebook(phonebookEntry);
			break;
		case 4:
			sortNames(phonebookEntry);
			break;
		case 5:
			findNumByName(phonebookEntry);
			break;
		case 6:
			selectRandom(phonebookEntry);
			break;
		case 7:
			deleteAll(phonebookEntry);
			printf("%s", "\nAll records erased\n");
			break;
		case 8:
			saveToFile(phonebookEntry);
			break;
		case 9:
			retrieveFromFile(phonebookEntry);
			break;		
		default:
			printf("%s", "\nError enter valid choice\n");
			break;							
		}
	
	
	}
	
	exit(EXIT_SUCCESS);	

	return 0;
}


// add friend function
void addFriend(entry *phonebookEntry) {
	
	printf("%s", "\n");
	printf("%s", "\nEnter first name: ");
	scanf("%s", &phonebookEntry[numOfEntries-1].fName);
	printf("%s", "\n");
	printf("%s", "\nEnter last name: ");
	scanf("%s", &phonebookEntry[numOfEntries-1].lName);
	printf("%s", "\n");
	printf("%s", "\nEnter phone number: ");
	scanf("%s", &phonebookEntry[numOfEntries-1].number);
	printf("%s", "\n");
	printf("%s", "\n");	
	
}


//delete friend function
void deleteFriend(entry *phonebookEntry) {
	
	int j;
	int k;
	char firstName[20];
	char lastName[20];
	
	printf("%s", "\nEnter first name: ");
	scanf("%s", &firstName);
	printf("%s", "\nEnter last name: ");
	scanf("%s", &lastName);
	
	for(j=0; j < numOfEntries; j++) {
		
		if(strcmp(phonebookEntry[j].fName, firstName)==0 && strcmp(phonebookEntry[j].lName, lastName) == 0) {
		
			position = j+1;
			for(k = position-1; k < numOfEntries-1; k++){
				
				phonebookEntry[k] = phonebookEntry[k+1];
				
			}
			
			numOfEntries--;
			break;
		}
		
	}
	
}


//show phonebook function
void showPhonebook(entry *phonebookEntry) {
	
	printf("%s", "\nPhonebook entries: \n");
	printf("%s", "\n");
	
	if(numOfEntries != 0) {
		
	int i;
	
	for(i=0; i < numOfEntries; i++) {
	printf("%s", "\n");
	printf("%s", &phonebookEntry[i].fName);
	printf("%s", " ");
	
	printf("%s", &phonebookEntry[i].lName);
	printf("%s", " ");
	printf("%s", "\n");
	printf("%s", &phonebookEntry[i].number);
	printf("%s", "\n");
		
		}
	} else {
		
		printf("%s", "\nNo entries to show\n");
		
	}
}


//sort function
void sortNames(entry *phonebookEntry) {
	
	int i;
	int j;
	int input;
	entry *tmp;
	
	tmp = (entry*)malloc(sizeof(entry));
	
	printf("%s", "Enter 1 to sort by first names or 2 to sort by last names");
	printf("%s", "\n Enter: ");
	scanf("%i", &input);
	
	
	if(input == 1) {
	
	for(i=0; i < numOfEntries-1; i++) {
		
		for(j=i+1; j < numOfEntries; j++) {
		
		
		if(strcmp(phonebookEntry[i].fName, phonebookEntry[j].fName) > 0) {
			
			strcpy(tmp[0].fName,phonebookEntry[i].fName);
			strcpy(tmp[0].lName,phonebookEntry[i].lName);
			strcpy(tmp[0].number,phonebookEntry[i].number);
			
			strcpy(phonebookEntry[i].fName, phonebookEntry[j].fName);
			strcpy(phonebookEntry[i].lName, phonebookEntry[j].lName);
			strcpy(phonebookEntry[i].number, phonebookEntry[j].number);
			
			strcpy(phonebookEntry[j].fName, tmp[0].fName);
			strcpy(phonebookEntry[j].lName, tmp[0].lName);
			strcpy(phonebookEntry[j].number, tmp[0].number);
		
		}
		
		}
	
	}
	
	} else if(input == 2) {
		
		for(i=0; i < numOfEntries-1; i++) {
		
		for(j=i+1; j < numOfEntries; j++) {
		
		
		if(strcmp(phonebookEntry[i].lName, phonebookEntry[j].lName) > 0) {
			
			strcpy(tmp[0].fName,phonebookEntry[i].fName);
			strcpy(tmp[0].lName,phonebookEntry[i].lName);
			strcpy(tmp[0].number,phonebookEntry[i].number);
			
			strcpy(phonebookEntry[i].fName, phonebookEntry[j].fName);
			strcpy(phonebookEntry[i].lName, phonebookEntry[j].lName);
			strcpy(phonebookEntry[i].number, phonebookEntry[j].number);

			strcpy(phonebookEntry[j].fName, tmp[0].fName);
			strcpy(phonebookEntry[j].lName, tmp[0].lName);
			strcpy(phonebookEntry[j].number, tmp[0].number);
		
		}
		
		}
	
	}
		
	}
	
		free(tmp);
	
}


//find num by name function
void findNumByName(entry *phonebookEntry) {
	
	char firstName[20];
	char lastName[20];
	
	
	printf("%s", "\nEnter first name: ");
	scanf("%s", &firstName);
	printf("%s", "\nEnter last name: ");
	scanf("%s", &lastName);
	
	
	int j;
	int k;
	
	for(j=0; j < numOfEntries; j++) {
		
		if(strcmp(phonebookEntry[j].fName, firstName)==0 && strcmp(phonebookEntry[j].lName, lastName) == 0) {
			
			printf("%s", "\n");
			printf("%s", &phonebookEntry[j].number);
			printf("%s", "\n");
			break;
			
		}
	}
	
}


//select random function
void selectRandom(entry *phonebookEntry) {
	
	srand((unsigned) time(NULL)); 
	int randInt = rand() % numOfEntries;
	
	printf("%s", "\nYou randomly selected: ");
	printf("%s", &phonebookEntry[randInt].fName);
	printf("%s", "\n calling.. \n");
	printf("%s", &phonebookEntry[randInt].number);
}




//save data to file function
void saveToFile(entry *phonebookEntry) {
	
	FILE *pWrite; 
	
	char fileName[100];
	int i;
	int j;
	int input;
	
	

		printf("%s", "Enter file name to save to: ");
		scanf("%s", &fileName);
		pWrite = fopen(fileName, "w");

		
		if(pWrite == NULL) {
			printf("Could not open file");
		}
		


	
	for(i = 0; i < numOfEntries; i++) {

	fprintf(pWrite, " %s %s %s ", phonebookEntry[i].fName, phonebookEntry[i].lName, phonebookEntry[i].number);

	}
	
	fclose(pWrite);
	
}


//retrieve data from file function
void retrieveFromFile(entry *phonebookEntry) {
	
	FILE *pRead;
	char fileName[100];
	int i=0;
	int j;


		printf("%s", "Enter file name: ");
		scanf("%s", &fileName);	
		pRead = fopen(fileName, "r");
		
		
		if(pRead == NULL) {
			printf("%s", "Could not open file");
		}
		
	
	
	while(!feof(pRead)) {
		
		numOfEntries++;
		
		if(numOfEntries > 1) {
			
				//handle memory as needed
				
				phonebookEntry = realloc(phonebookEntry, numOfEntries*sizeof(entry));
				
				if(phonebookEntry==NULL) {
					
					printf("%s", "out of memory");
					
				} else {
					
					printf("%s", "");
					printf("%s", "");
					
				}
			} else if(numOfEntries == 1) {
				
				
			}
	
		fscanf(pRead, "%s %s %s", phonebookEntry[i].fName, phonebookEntry[i].lName, phonebookEntry[i].number);
		
		i++;
	}
	
	
	numOfEntries--;	
	fclose(pRead);	
	
}


//delete all function
void deleteAll(entry *phonebookEntry) {
	
	free(phonebookEntry);
	numOfEntries = 0;
	
}
