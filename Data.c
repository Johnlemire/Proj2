//**********************************/
// John lemire
// Data.c : Contains data strucs and data manipulation calls
// Project 2. Dr Coffee 
//

//************************************
// Customer 
//

struct Customer {

	int priorityNum;
	int aTime;
	int dTime;
	struct Customer * next;
}

typedef struct Customer nCust;

nCust *FIFOhead;

void putQ(nCust *custIn, nCust *pQ[100]){
	
	pQ[custIn->priorityNum]=custIn;
}

nCust popQ(struct Cusomer *pQ[100]){

	return pQ[0];
}

nCust newCust(double aTime){

	nCust newCust;
	newCust = (*nCust) malloc(sizeof(nCust));
	newCust->aTime = aTime;
	newCust->next = NULL;
	newCust->dTime = aTime;
	return newCust;
}

void setHead(nCust *newHead){

	FIFOhead=newHead;
}

void add2FIFO(nCust *current, nCust new){

	if(current->next != NULL){
		lastInFIFO(current->next);		
	}
	else{
		current->next=new;
	}
}

void add2PQ(nCust new, nCust pQ[100]){

	

}





















