#include <stdio.h>
#include "stuff.h"

void storeFile(char *fileName, knapsack *data){

	FILE *fp;
	char string[128];
	int i = 0;
	fp = fopen("knapsack.data","r");

	while(NULL != fgets(string,128,fp)){
		sscanf(string,"%d %d %s",&(data[i].weight),&(data[i].value), &(data[i].name));
		data[i].item = i+1;
		i++;
	}
//	ITEMS = i;
}
