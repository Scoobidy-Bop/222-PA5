#include <stdio.h>
#include "stuff.h"
#include <string.h>

void init(knapsack *data){

	int i = 0;

	for(i = 0; i < 128; i++){
		data[i].value = -1;
		data[i].weight = -1;
		data[i].item = -1;
		strcpy(data[i].name,"a");
	}

}
