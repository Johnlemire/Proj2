// John Lemire 
//Project 2 
//Main.c

#include <stdio.h>

int main(int argc, char ** argv){

	char inputBuffer[10];
	int serviceLineCount;
	int customerCount;
	int mu;
	int lambda;
	struct Customer pQ[100]; //array of 100 customers for priority Q

	FILE * input;
	input = fopen("runSimulation.txt","r");
	
	fgets(inputBuffer, sizeof(inputBuffer), input);
	lambda = atoi(inputBuffer);
	fgets(inputBuffer, sizeof(inputBuffer), input);
	mu = atoi(inputBuffer);
	fgets(inputBuffer, sizeof(inputBuffer), input);
	serviceLineCount = atoi(inputBuffer);
	fgets(inputBuffer, sizeof(inputBuffer), input);
	customerCount = atoi(inputBuffer);

	fprintf(stdout,"%d %d %d %d \n",lambda, mu, serviceLineCount, customerCount);

	



	return 0;
}

