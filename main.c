#include <stdio.h>
#include "stuff.h"


int main(int argc, char *argv[]){

	int weight;
	knapsack data[128];
	init(data);

	if(argc == 2){
		if(sscanf(argv[1],"%d",&weight))
			storeFile("knapsack.data",data);
	}

	printf("%d %d %d %s\n",data[2].item, data[2].weight, data[2].value, data[2].name);
	return 0;
}
