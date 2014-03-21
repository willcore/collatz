//Having fun with the Collatz Conjecture
//From Wikipedia:
    //If the number is even, divide it by two.
    //If the number is odd, triple it and add one.
	//This process will eventually reach the number 1, 
		//regardless of which positive integer is chosen initially.

#include <stdio.h>

int conjecture(int coll);

int main (void){
	
	int collatz;

	printf("Please input your testing int for Collatz Conjecture:\n");
	
	scanf("%d", &collatz);

	conjecture(collatz);

}

int conjecture(int coll){

	if(coll!=1){

		printf("%d\n",coll);

		if (coll%2==0){ //even

			coll = coll/2;

		}
		else{

			coll= (3*coll)+1;
		}

		conjecture(coll);
	}

	else{

		printf("The collatz conjecture holds!\nYour input now = %d\n",coll);
	
	}

}