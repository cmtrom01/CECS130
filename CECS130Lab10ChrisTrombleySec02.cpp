/*

Chris Trombley
CECS 130-02
4/12/19
This program allows the user to play 3d tic tac toe

*/


//include need libraries
#include<iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>



//declare std namespace
using namespace std;


//create class for the gameboard
class GameBoard {
	//declare public vars
	public:
	//prototype functions	
	char boardArray[5][5];	
	void printBoard();
	void updateBoard(int, int, int, int);
	int totalMoveHistory[27];
	int computerMoveHistory[14];
	int userMoveHistory[14];
	
	int computerMove(int, int);
	void addToUserMove(int, int);
	int lastMove;
	bool checkForWinnerUser(int);
	bool checkForWinnerComputer(int); 
	bool checkMove(int, int);
	
	//declare vars
	int oneu;
	int twou;
	int threeu;
	int fouru;
	int fiveu;
	int sixu;
	int sevenu;
	int eightu;
	int nineu;
	int tenu;
	int elevenu;
	int twelveu;
	int thirteenu;
	int fourteenu;
	int fifteenu;
	int sixteenu;
	int seventeenu;
	int eighteenu;
	int nineteenu;
	int tu;
	int toneu;
	int ttwou;
	int tthreeu;
	int tfouru;
	int tfiveu;
	int tsixu;
	int tsevenu;
	
	
	
	int onec;
	int twoc;
	int threec;
	int fourc;
	int fivec;
	int sixc;
	int sevenc;
	int eightc;
	int ninec;
	int tenc;
	int elevenc;
	int twelvec;
	int thirteenc;
	int fourteenc;
	int fifteenc;
	int sixteenc;
	int seventeenc;
	int eighteenc;
	int nineteenc;
	int tc;
	int tonec;
	int ttwoc;
	int tthreec;
	int tfourc;
	int tfivec;
	int tsixc;
	int tsevenc;
	
	bool isOpen;
	int ctc;
	int utc;
	

};

//print board public function
void GameBoard::printBoard() {
	
	int i, j, k, l;
	
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
					
				if(i%2 == 0 & j%2==0) {
				
					boardArray[i][j] = ' ';
				
				} else {
			
				boardArray[i][j] = '*';
				
			}
		}	
	}
	
	for(k = 0; k < 5; k++) {
		for(l=0; l<5; l++) {
			
			cout<<boardArray[k][l];
		
		}
		cout<<endl;
	}
	cout<<endl;
}

//update board public function
void GameBoard::updateBoard(int XorO, int move, int count, int firstOrSecond) {
	
		
		int i, j, k, l;
		int counter = 0;	
	
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
					
				if(i%2 == 0 && j%2==0) {
					counter++;
					if(counter == move) {
						if(firstOrSecond == 1) {
						if(XorO == 1) {
						
						boardArray[i][j] = 'X';
					} else if(XorO==0){
						boardArray[i][j] = 'O';
					}
						} else if(firstOrSecond == 0) {
							if(XorO==0) {
							boardArray[i][j] = 'O';
					} else if (XorO ==1){
						
						boardArray[i][j] = 'X';
						
						}
					} 
			
				}
					
				} else {
			
				boardArray[i][j] = '*';
				
			}
		}
		
	}
	
	
	for(k = 0; k < 5; k++) {
		for(l=0; l<5; l++) {
			
			
			cout<<boardArray[k][l];
		
		}
		cout<<endl;
	}
	cout<<endl;
	
		totalMoveHistory[count-1] = move;
		
}


bool GameBoard::checkForWinnerUser(int count) {
	int i,j;
	bool isWinner;
	int tmp;
	tmp = utc;
	utc = 0;
	
	for(i=0;i<count;i++) {
		switch(userMoveHistory[i]){
			case 1:
				oneu =1;
				break;
			case 2:
				twou = 2;
				break;
			case 3:
				threeu = 3;
				break;
			case 4:
				fouru = 4;
				break;			
			case 5:
				fiveu = 5;
				break;
			case 6:
				sixu = 6;
				break;
			case 7:
				sevenu = 7;
				break;	
			case 8:
				eightu = 8;
				break;
			case 9:
				nineu = 9;
				break;
			case 10:
				tenu = 10;
				break;
			case 11:
				elevenu = 11;
				break;
			case 12:
				twelveu = 12;
				break;
			case 13:
				thirteenu = 13;
				break;
			case 14:
				fourteenu = 14;
				break;
			case 15:
				fifteenu = 15;
				break;
			case 16:
				sixteenu = 16;
				break;
			case 17:
				seventeenu = 17;
				break;
			case 18:
				eighteenu = 18;
				break;	
			case 19:
				nineteenu = 19;
				break;
			case 20:
				tu = 20;
				break;
			case 21:
				toneu = 21;
				break;
			case 22:
				ttwou = 22;
				break;
			case 23:
				tthreeu = 23;
				break;
			case 24:
				tfouru = 24;
				break;
			case 25:
				tfiveu = 25;
				break;
			case 26:
				tsixu = 26;
				break;
			case 27:
				tsevenu = 27;
				break;															
						
					
					
		}
		
	}
	
	
	if(oneu == 1 && twou == 2 && threeu == 3) {
		
		isWinner = true;
		utc++;
		
	}  if(fouru == 4 && fiveu == 5 && sixu == 6) {
		
		isWinner = true;
		utc++;
		
	}  if(sevenu == 7 && eightu == 8 && nineu == 9) {
		
		isWinner = true;
		utc++;
		
	}  if(oneu == 1 && fiveu == 5 && nineu == 9) {
		
		isWinner = true;
		utc++;
		
		
	}  if(threeu == 3 && fiveu == 5 && sevenu == 7) {
		
		isWinner = true;
		utc++;
		
		
	}  if(oneu == 1 && fouru == 4 && sevenu == 7) {
		isWinner = true;
		utc++;
	}  if(twou == 2 && fiveu == 5 && eightu == 8) {
		isWinner = true;
		utc++;
	}  if(threeu == 3 && sixu == 6 && nineu == 9) {
		isWinner = true;
		utc++;
	}
	
	 if(oneu == 1 && fouru == 4 && sevenu == 7) {
		
		isWinner = true;
		utc++;
		
	}  if(twou == 2 && fiveu == 5 && eightu == 8) {
		isWinner = true;
		utc++;
	}  if(threeu == 3 && sixu == 6 && nineu == 9) {
		isWinner = true;
		utc++;
	}  if(tenu == 10 && elevenu == 11 && twelveu == 12) {
		isWinner = true;
		utc++;
	}  if(thirteenu == 13 && fourteenu == 14 && fifteenu == 15) {
		isWinner = true;
		utc++;
	}  if(sixteenu == 16 && seventeenu == 17 && eighteenu == 18) {
		isWinner = true;
		utc++;
	}  if(nineteenu == 19 && tu == 20 && toneu == 21) {
		isWinner = true;
		utc++;
	}  if(ttwou == 22 && tthreeu == 23 && tfouru == 24) {
		isWinner = true;
		utc++;
	}  if(tfiveu == 25 && tsixu == 26 && tsevenu == 27) {
		isWinner = true;
		utc++;
	}  if(tenu == 10 && thirteenu == 13 && sixteenu == 16) {
		isWinner = true;utc++;
	}  if(elevenu == 11 && fourteenu == 14 && seventeenu == 17) {
		isWinner = true;utc++;
	}  if(tenu == 12 && fifteenu == 15 && sixteenu == 18) {
		isWinner = true;utc++;
	}  if(nineteenu == 19 && ttwou == 22 && tfiveu == 25) {
		isWinner = true;utc++;
	}  if(tu == 20 && tthreeu == 23 && tsixu == 26) {
		isWinner = true;
	}  if(toneu == 21 && tfouru == 24 && tsevenu == 27) {
		isWinner = true;utc++;
	}  if(tenu == 10 && fourteenu == 14 && eighteenu == 18) {
		isWinner = true;utc++;
	} if(twelveu == 12 && fourteenu == 14 && sixteenu == 16) {
		isWinner = true;utc++;
	}  if(nineteenu == 19 && tthreeu == 23 && tsevenu == 27) {
		isWinner = true;utc++;
	}  if(toneu == 21 && tthreeu == 23 && tfiveu == 25) {
		isWinner = true;utc++;
	}  if(oneu == 1 && tenu == 10 && nineteenu == 19) {
		isWinner = true;utc++;
	} if(fouru == 4 && thirteenu == 13 && ttwou == 22) {
		isWinner = true;utc++;
	}  if(sevenu == 7 && sixteenu == 16 && tfiveu == 25) {
		isWinner = true;utc++;
	}  if(twou == 2 && elevenu == 11 && tu == 20) {
		isWinner = true;utc++;
	}  if(fiveu == 5 && tthreeu == 23 && fourteenu == 14) {
		isWinner = true;utc++;
	}  if(eightu == 8 && seventeenu == 17 && tsixu == 26) {
		isWinner = true;utc++;
	} if(threeu == 3 && twelveu == 12 && toneu == 21) {
		isWinner = true;utc++;
	}  if(sixu == 6 && fifteenu == 15 && tfouru == 24) {
		isWinner = true;utc++;
	}  if(fiveu == 5 && eighteenu == 18 && tsevenu == 27) {
		isWinner = true;utc++;
	}  if(oneu == 1 && fourteenu == 14 && tsevenu == 27) {
		isWinner = true;utc++;
	} if(threeu == 3 && fourteenu == 14 && tfiveu == 25) {
		isWinner = true;utc++;
	} if(oneu == 1 && elevenu == 11 && toneu == 21) {
		isWinner = true;utc++;
	}  if(fouru == 4 && fourteenu == 14 && tfouru == 24) {
		isWinner = true;utc++;
	}  if(sevenu == 7 && seventeenu == 17 && tsevenu == 27) {
		isWinner = true;utc++;
	}  if(oneu == 1 && thirteenu == 13 && tfiveu == 25) {
		isWinner = true;
		utc++;
	}  if(twou == 2 && fourteenu == 14 && tsixu == 26) {
		isWinner = true;
		utc++;
	}  if(threeu == 3 && fifteenu == 15 && tsevenu == 27) {
		isWinner = true;
		utc++;
	}
	

	
	if(utc > tmp) {
		return true;
	} else if(utc <= tmp) {
		return false;
	}
}

//check if computer wins public function
bool GameBoard::checkForWinnerComputer(int count) {
	
	int i,j;
	bool isWinner;
	int tmp;
	if(count == 1) {
		ctc = 0;
	}
	tmp = ctc;
	ctc = 0;
	
	for(i=0;i<count;i++) {
		switch(computerMoveHistory[i]){
			case 1:
				onec = 1;
				break;
			case 2:
				twoc = 2;
				break;
			case 3:
				threec = 3;
				break;
			case 4:
				fourc = 4;
				break;			
			case 5:
				fivec = 5;
				break;
			case 6:
				sixc = 6;
				break;
			case 7:
				sevenc = 7;
				break;	
			case 8:
				eightc = 8;
				break;
			case 9:
				ninec = 9;
				break;
			case 10:
				tenc = 10;
				break;
			case 11:
				elevenc = 11;
				break;
			case 12:
				twelvec = 12;
				break;
			case 13:
				thirteenc = 13;
				break;
			case 14:
				fourteenc = 14;
				break;
			case 15:
				fifteenc = 15;
				break;
			case 16:
				sixteenc = 16;
				break;
			case 17:
				seventeenc = 17;
				break;
			case 18:
				eighteenc = 18;
				break;	
			case 19:
				nineteenc = 19;
				break;
			case 20:
				tc = 20;
				break;
			case 21:
				tonec = 21;
				break;
			case 22:
				ttwoc = 22;
				break;
			case 23:
				tthreec = 23;
				break;
			case 24:
				tfourc = 24;
				break;
			case 25:
				tfivec = 25;
				break;
			case 26:
				tsixc = 26;
				break;
			case 27:
				tsevenc = 27;
				break;			
					
		}
		
		
	}
	
	if(onec == 1 && twoc == 2 && threec == 3) {
		
		isWinner = true;
		ctc++;
		
	}  if(fourc == 4 && fivec == 5 && sixc == 6) {
		
		isWinner = true;
		ctc++;
		
	}  if(sevenc == 7 && eightc == 8 && ninec == 9) {
		
		isWinner = true;
		ctc++;
		
	}  if(onec == 1 && fivec == 5 && ninec == 9) {
		
		isWinner = true;
		ctc++;
		
		
	}  if(threec ==3 && fivec == 5 && sevenc == 7) {
		
		isWinner = true;
		ctc++;
		
	} 
	 if(onec == 1 && fourc == 4 && sevenc == 7) {
		isWinner = true;
		ctc++;
	}  if(twoc == 2 && fivec == 5 && eightc == 8) {
		isWinner = true;ctc++;
	}  if(threec == 3 && sixc == 6 && ninec == 9) {
		isWinner = true;ctc++;
	}  if(tenc == 10 && elevenc == 11 && twelvec == 12) {
		isWinner = true;ctc++;
	}  if(thirteenc == 13 && fourteenc == 14 && fifteenc == 15) {
		isWinner = true;ctc++;
	}  if(sixteenc == 16 && seventeenc == 17 && eighteenc == 18) {
		isWinner = true;ctc++;
	}  if(nineteenc == 19 && tc == 20 && tonec == 21) {
		isWinner = true;ctc++;
	}  if(ttwoc == 22 && tthreec == 23 && tfourc == 24) {
		isWinner = true;ctc++;
	}  if(tfivec == 25 && tsixc == 26 && tsevenc == 27) {
		isWinner = true;ctc++;
	}  if(tenc == 10 && thirteenc == 13 && sixteenc == 16) {
		isWinner = true;ctc++;
	}  if(elevenc == 11 && fourteenc == 14 && seventeenc == 17) {
		isWinner = true;ctc++;
	}  if(tenc == 12 && fifteenc == 15 && sixteenc == 18) {
		isWinner = true;ctc++;
	}  if(nineteenc == 19 && ttwoc == 22 && tfivec == 25) {
		isWinner = true;ctc++;
	}  if(tc == 20 && tthreec == 23 && tsixc == 26) {
		isWinner = true;ctc++;
	}  if(tonec == 21 && tfourc == 24 && tsevenc == 27) {
		isWinner = true;ctc++;
	}  if(tenc == 10 && fourteenc == 14 && eighteenc == 18) {
		isWinner = true;ctc++;
	} if(twelvec == 12 && fourteenc == 14 && sixteenc == 16) {
		isWinner = true;ctc++;
	}  if(nineteenc == 19 && tthreec == 23 && tsevenc == 27) {
		isWinner = true;ctc++;
	}  if(tonec == 21 && tthreec == 23 && tfivec == 25) {
		isWinner = true;ctc++;
	}  if(onec == 1 && tenc == 10 && nineteenc == 19) {
		isWinner = true;ctc++;
	} if(fourc == 4 && thirteenc == 13 && ttwoc == 22) {
		isWinner = true;ctc++;
	}  if(sevenc == 7 && sixteenc == 16 && tfivec == 25) {
		isWinner = true;ctc++;
	}  if(twoc == 2 && elevenc == 11 && tc == 20) {
		isWinner = true;ctc++;
	}  if(fivec == 5 && tthreec == 23 && fourteenc == 14) {
		isWinner = true;ctc++;
	}  if(eightc == 8 && seventeenc == 17 && tsixc == 26) {
		isWinner = true;ctc++;
	} if(threec == 3 && twelvec == 12 && tonec == 21) {
		isWinner = true;ctc++;
	}  if(sixc == 6 && fifteenc == 15 && tfourc == 24) {
		isWinner = true;ctc++;
	}  if(fivec == 5 && eighteenc == 18 && tsevenc == 27) {
		isWinner = true;ctc++;
	}  if(onec == 1 && fourteenc == 14 && tsevenc == 27) {
		isWinner = true;ctc++;
	} if(threec == 3 && fourteenc == 14 && tfivec == 25) {
		isWinner = true;ctc++;
	} if(onec == 1 && elevenc == 11 && tonec == 21) {
		isWinner = true;ctc++;
	}  if(fourc == 4 && fourteenc == 14 && tfourc == 24) {
		isWinner = true;ctc++;
	}  if(sevenc == 7 && seventeenc == 17 && tsevenc == 27) {
		isWinner = true;ctc++;
	}  if(onec == 1 && thirteenc == 13 && tfivec == 25) {
		isWinner = true;ctc++;
	}  if(twoc == 2 && fourteenc == 14 && tsixc == 26) {
		isWinner = true;ctc++;
	}  if(threec == 3 && fifteenc == 15 && tsevenc == 27) {
		isWinner = true;ctc++;
	} 
	
	
	
	if(ctc > tmp) {
		
		return true;
		
		
	} else if(ctc <= tmp) {
		
		return false;
		
	}
}



//executes computer move public function
int GameBoard::computerMove(int count, int computerCount) {
	
	int move;
	int k;
	int i;
	
	srand (time(NULL));
	MOVE:
  	move = rand() % 27+1;

	for(k=0;k<count;k++) {
		if(totalMoveHistory[k] == move) {
			goto MOVE;
		}
	}

  	
  	for(i=0; i<count; i++) {
  		if(totalMoveHistory[i] == move) {
  			while(totalMoveHistory[i] == move) {
  				move = rand() % 27+1;
  			}
  		}
  	}
	
	computerMoveHistory[computerCount-1] = move;
	
	lastMove = move;
	
	return move;

}

//adds user move to user move array
void GameBoard::addToUserMove(int count, int move) {
	int j;
	for(j=0;j<count;j++) {
		if(userMoveHistory[j]==move) {
			cout<<"error move not open"<<endl;
			
			cout<<"Enter next move (number 1-9) or 0 to exit: ";
			cin>>move;
			
		}
	}
	userMoveHistory[count-1] = move;
}

//check move function
bool GameBoard::checkMove(int move, int count) {
	
	
	
	
	
	int i;
	//if(count > 2) {
	for(i = 0; i < count; i++) {
		if(totalMoveHistory[i] == move) {
			return false;
			break;
		}
	}
//	} 
	
	
	
	return true;
}





//3d board class
class ThreeDBoard: public GameBoard {
	public:

		void userMove(int,int);
		void updateBoard(int,int,int,int,int,int);
		void printBoard();
		char boardArray1[5][5];
		char boardArray2[5][5];
		char boardArray3[5][5];
};


//function to print board
void ThreeDBoard::printBoard() {
	
	int i, j, k, l, b ,v, m, n;
	
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
					
				if(i%2 == 0 & j%2==0) {
					boardArray1[i][j] = ' ';
					boardArray2[i][j] = ' ';
					boardArray3[i][j] = ' ';
				} else {
			
					boardArray1[i][j] = '*';
					boardArray2[i][j] = '*';
					boardArray3[i][j] = '*';
				
			}
		}
		
	}
	
	for(k = 0; k < 5; k++) {
		for(l=0; l<5; l++) {
			
			
			cout<<boardArray1[k][l];

		
		}
		cout<<endl;
	}
	cout<<endl;
	
	for(b = 0; b < 5; b++) {
		for(v=0; v<5; v++) {
			
			
			cout<<boardArray2[b][v];
		
		
		}
		cout<<endl;
	}
	cout<<endl;
	
	for(m = 0; m < 5; m++) {
		for(n=0; n<5; n++) {
			
			
			cout<<boardArray3[m][n];
		
		
		}
		cout<<endl;
	}
	cout<<endl;
	
}


//Write update and print board next
void ThreeDBoard::updateBoard(int XorO, int move, int count, int firstOrSecond, int ccount, int ucount) {
	  
	int counter = 0;
	if(move <=9) {
		
		int i, j, k, l;
	
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
					
				if(i%2 == 0 && j%2==0) {
					counter++;
					if(counter == move) {
						if(firstOrSecond == 1) {
						if(XorO == 1) {
						
						boardArray1[i][j] = 'X';
					} else if(XorO==0){
						boardArray1[i][j] = 'O';
					}
						} else if(firstOrSecond == 0) {
							if(XorO==0) {
							boardArray1[i][j] = 'O';
					} else if (XorO ==1){
						
						boardArray1[i][j] = 'X';
						
						}
					} 
			
				}
					
				} else {
			
				boardArray1[i][j] = '*';
				
			}
		}
		
	}
	
	
	

	
		totalMoveHistory[count-1] = move;
		
	} else if(move <= 18 && move > 9) {
		
		int i, j, k, l;
		
		counter = 9;
	
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
					
				if(i%2 == 0 && j%2==0) {
					counter++;
					if(counter == move) {
						if(firstOrSecond == 1) {
						if(XorO == 1) {
						
						boardArray2[i][j] = 'X';
					} else if(XorO==0){
						boardArray2[i][j] = 'O';
					}
						} else if(firstOrSecond == 0) {
							if(XorO==0) {
							boardArray2[i][j] = 'O';
					} else if (XorO ==1){
						
						boardArray2[i][j] = 'X';
						
						}
					} 
			
				}
					
				} else {
			
				boardArray2[i][j] = '*';
				
			}
		}
		
	}
	
	

	
		totalMoveHistory[count-1] = move;
		
	} else if(move<=27 && move > 9) {
		
		counter=18;
		
		int i, j, k, l;
	
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
					
				if(i%2 == 0 && j%2==0) {
					counter++;
					if(counter == move) {
						if(firstOrSecond == 1) {
						if(XorO == 1) {
						
						boardArray3[i][j] = 'X';
					} else if(XorO==0){
						boardArray3[i][j] = 'O';
					}
						} else if(firstOrSecond == 0) {
							if(XorO==0) {
							boardArray3[i][j] = 'O';
					} else if (XorO ==1){
						
						boardArray3[i][j] = 'X';
						
						}
					} 
			
				}
					
				} else {
			
				boardArray3[i][j] = '*';
				
			}
		}
		
	}
	
	

	
		totalMoveHistory[count-1] = move;
		
		
	}
	
	
	
	
	int k, l, b ,v, m, n;
		
	
	for(k = 0; k < 5; k++) {
		for(l=0; l<5; l++) {
			
			
			cout<<boardArray1[k][l];

		
		}
		cout<<endl;
	}
	cout<<endl;
	
	for(b = 0; b < 5; b++) {
		for(v=0; v<5; v++) {
			
			
			cout<<boardArray2[b][v];
		
		
		}
		cout<<endl;
	}
	cout<<endl;
	
	for(m = 0; m < 5; m++) {
		for(n=0; n<5; n++) {
			
			
			cout<<boardArray3[m][n];
		
		
		}
		cout<<endl;
	}
	cout<<"**********************************"<<endl;
	
	
	cout<<endl;
	
	
		
	
}


//function to print 3d board
void ThreeDBoard::userMove(int move, int count) {
	
	int j;
	for(j=0;j<count;j++) {
		if(userMoveHistory[j]==move) {
			cout<<"Error move not open"<<endl;
			
			break;
			
		}
	}
	userMoveHistory[count-1] = move;
	
	
}


























// declare needed vars for main function
int userInput = 1;
char boardArray[3][3];
int computerMove;
int counter = 0;
int userCounter = 0;
int computerCounter=0;
int computerWinCounter = 0;
int userWinCounter = 0;
int computerXorO;
int playerXorO;
bool computerWin;
bool userWin;
bool openSpace;

//prototype functions
void printBoard();
void printBoardsandInstructions();
void updateBoard();
void computerNextMove();
void checkForWinner();
void askUserNextMove();
void askUserNextMove1();


//main function
int main() {
	
	int nextMove=1;
	int nextMove1;
	int boardNumber;
	
	printBoardsandInstructions();
	system("PAUSE");
	
	//randomly decide who goes first
	int whoGoesFirst;
	srand (time(NULL));
	whoGoesFirst = rand()%2;
	
	if(whoGoesFirst == 0 ) {
	
	cout<<endl<<endl<<"You go first and are X's"<<endl;
	playerXorO = 1;
	computerXorO = 0;
	
	} else if(whoGoesFirst == 1) {
		
		cout<<endl<<endl<<"You go second and are O's"<<endl;
		playerXorO = 0;
		computerXorO = 1;
		
	}
	
	
		//declare gameboard object
		
		ThreeDBoard gb;
		
		gb.printBoard();
		
		
		while(nextMove!=0) {
		if(whoGoesFirst == 0) {
		move1:	
		cout<<"Enter next move (number 1-9) or 0 to exit: ";
		cin>>nextMove;
		if(nextMove > 27) {
			cout<<endl<<"Error enter a number between 1-27"<<endl;
			goto move1;
		}
		counter++;
		userCounter++;
		openSpace = gb.checkMove(nextMove, counter);
		while(openSpace == false) {
			move2:
			cout<<endl<<"Error space already taken"<<endl;
			cout<<"Enter next move (number 1-9) or 0 to exit: ";
			cin>>nextMove;
			if(nextMove > 27) {
			cout<<endl<<"Error enter a number between 1-27"<<endl;
			goto move2;
		}
			openSpace = gb.checkMove(nextMove, counter);


			}
		gb.userMove(nextMove, userCounter);	
		gb.updateBoard(1, nextMove, counter, 0, computerCounter, userCounter);	
			
		if(nextMove==0){
			break;
		}
		
		userWin = gb.checkForWinnerUser(userCounter);
		if(userWin == true) {
			cout<<endl<<"You win one point"<<endl;
			userWinCounter++;
			cout<<endl<<"Score: "<<"User: "<<userWinCounter<<" Computer: "<<computerWinCounter<<endl;
		}
		if(counter == 27 && userWinCounter == computerWinCounter) {
			cout<<endl<<"Game over. Draw"<<endl;
			break;
		} else if(counter == 27 && userWinCounter > computerWinCounter) {
			cout<<endl<<"Game over, you win!!"<<endl;
			break;
			
		} else if(counter == 27 && computerWinCounter > userWinCounter) {
			cout<<endl<<"Game over. Sorry you lose try again"<<endl;
			break;
			
		}
		
		counter++;
		computerCounter++;
		computerMove = gb.computerMove(counter, computerCounter);
		
		gb.updateBoard(0, computerMove, counter, 0,computerCounter, userCounter);
		
		computerWin = gb.checkForWinnerComputer(computerCounter);
		if(computerWin == true) {
			cout<<endl<<"Computer wins one point"<<endl;
			computerWinCounter++;
			cout<<endl<<"Score: "<<"User: "<<userWinCounter<<" Computer: "<<computerWinCounter<<endl;
		}
		
		if(counter == 27 && userWinCounter == computerWinCounter) {
			cout<<endl<<"Game over. Draw"<<endl;
			break;
		} else if(counter == 27 && userWinCounter > computerWinCounter) {
			cout<<endl<<"Game over, you win!!"<<endl;
			break;
			
		} else if(counter == 27 && computerWinCounter > userWinCounter) {
			cout<<endl<<"Game over. Sorry you lose try again"<<endl;
			break;
			
		}
		
	} else if(whoGoesFirst == 1) {
		counter++;
		computerCounter++;
		computerMove = gb.computerMove(counter, computerCounter);
		gb.updateBoard(1, computerMove, counter, 1,computerCounter, userCounter);
		computerWin = gb.checkForWinnerComputer(computerCounter);

		if(computerWin == true) {
			cout<<endl<<"Computer wins one point"<<endl;
			computerWinCounter++;
			cout<<endl<<"Score: "<<"User: "<<userWinCounter<<" Computer: "<<computerWinCounter<<endl;
			
		}
		if(counter == 27 && userWinCounter == computerWinCounter) {
			cout<<endl<<"Game Over. Draw"<<endl;
			break;
		} else if(counter == 27 && userWinCounter > computerWinCounter) {
			cout<<endl<<"Game over, you win!!"<<endl;
			break;
			
		} else if(counter == 27 && computerWinCounter > userWinCounter) {
			cout<<endl<<"Game Over. Sorry you lose try again"<<endl;
			break;
			
		}
		
		move3:
		cout<<"Enter next move (number 1-9) or 0 to exit: ";
		cin>>nextMove;
		if(nextMove > 27) {
			cout<<endl<<"Error enter a number between 1-27"<<endl;
			goto move3;
		}
		counter++;
		userCounter++;
		openSpace = gb.checkMove(nextMove, counter);
		while(openSpace == false) {
			move4:
			cout<<endl<<"Error space already taken"<<endl;
			cout<<"Enter next move (number 1-9) or 0 to exit: ";
			cin>>nextMove;
			if(nextMove > 27) {
			cout<<endl<<"Error enter a number between 1-27"<<endl;
			goto move4;
		}
			openSpace = gb.checkMove(nextMove, counter);

			}
		gb.userMove(nextMove,userCounter);			
	
		gb.updateBoard(0, nextMove, counter, 1,computerCounter, userCounter);	
		if(nextMove==0){
			break;
		}
		userWin = gb.checkForWinnerUser(userCounter);

		if(userWin == true) {
			userWinCounter++;
			cout<<endl<<"You win one point"<<endl;
			cout<<endl<<"Score: "<<"User: "<<userWinCounter<<" Computer: "<<computerWinCounter<<endl;
		}
		if(counter == 27 && userWinCounter == computerWinCounter) {
			cout<<endl<<"Game Over. Draw"<<endl;
			break;
		} else if(counter == 27 && userWinCounter > computerWinCounter) {
			cout<<endl<<" Game over, you win!!"<<endl;
			break;
			
		} else if(counter == 27 && computerWinCounter > userWinCounter) {
			cout<<endl<<"Game over. Sorry you lose try again"<<endl;
			break;
			
		}
		
	}
		
	}
	
	return 0;
}

//function to print board and instructions
void printBoardsandInstructions() {
	
	cout<<endl<<"********************************"<<endl;
	cout<<endl<<"********************************"<<endl;
	cout<<endl<<"********************************"<<endl;
	
	cout<<endl<<"When prompted, enter move as corresponding number (see below) **the player with the most three in a row wins**"<<endl;
	
	cout<<endl<<"1*2*3"<<endl;
	cout<<"*****"<<endl;
	cout<<"4*5*6"<<endl;
	cout<<"*****"<<endl;
	cout<<"7*8*9"<<endl;
	
	cout<<endl<<"10*11*12"<<endl;
	cout<<"*****"<<endl;
	cout<<"13*14*15"<<endl;
	cout<<"*****"<<endl;
	cout<<"16*17*18"<<endl;
	
	cout<<endl<<"19*20*21"<<endl;
	cout<<"*****"<<endl;
	cout<<"22*23*24"<<endl;
	cout<<"*****"<<endl;
	cout<<"25*26*27"<<endl;
	
	cout<<endl<<"********************************"<<endl;
	cout<<endl<<"********************************"<<endl;
	
	
}



