#include <stdio.h>
#include <stdlib.h>
#include "StaticArray.h"
// include the library you want to test

int main(int argc, char *argv[]) {
	
	List l;
	initList(&L);
	insertRear(&L, 16);
	insertRear(&L, 12);
	insertFront(&L, 15);
	insertFront(&L, 21);
	insertSorted(&L, 12);
	insertedSorted(&L, 14);
	displayList(L);
	bool searchItem(&L, 14);
	bool deleteFront(&L);
	bool deleteRear(&L);
	int deleteAt(&L, int 3);
	bool deleteItem(&L, 14);
	int deleteAllItem(&L, 12);
	return 0;
}
