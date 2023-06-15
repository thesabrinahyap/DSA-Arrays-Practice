#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "StaticArray.h"

void initList(List *list){
	list->count = 0;
}

List newList(){
	List l;
	l.count = 0;
	return l;
}

void displayList(List list){
	for (int ctr=0; ctr<list.count; ctr++){
		printf("%d\n", list.elems[ctr]);
	}
}

bool insertFront(List *list, DATA item){
	int ctr;
	bool b = false;
	
	if(list->count != MAX){
		for(ctr = list->count; ctr>0; ctr--){
			list->elems[ctr] = list->elems[ctr-1];
			list->elems[0] = item;
			b = true;
		}
		list->count++;
	}
	return b;
}

bool insertRear(List *list, DATA item){
	for(bool b = false;list->count!= MAX; list->count++){
		list->elems[list->count] = item;
		b = true;
	}
	return b;
}

bool insertSorted(List *list, DATA item){
	int x,y;
	bool b = false;
	for(x=0; x<list->count list->elems[x]<=item; x++){
		for(y=list->count; y>x; y--){
			list->elems[y] = list->elems[y-1];
			list->elems[x] = item;
			list->count++;
		}
	}
	return b;
}

bool insertAt(List *list, DATA item, int loc){
	int ctr;
	bool b = false;
	if(loc<0 || loc>list->count){
		for(ctr = list->count; ctr>loc; ctr--){
			list->elems[ctr] = list->elems[ctr-1];
			list->elems[loc] = item;
			list->count++;
			b= true;
		}
	}
	return b;
}

bool searchItem(List list, DATA key){
	for(int ctr=0; ctr<list.count && list.elems[ctr] != key; ctr++){}
	return(ctr<count)? true:false;
}

int getItem(List list, DATA key);

bool deleteFront(List *list){
	int ctr;
	bool b = false;
	if(list->count != 0){
		for(ctr=0; ctr<list->count-1; ctr++){
			list->elems[ctr] = list->elems[ctr+1];
			b= true;
		}
		list->count--;
	}
	return b;
}

bool deleteRear(List *list){
	if(list->count >= 0){
		list->count--;
	}
	return (list->count>=0)? true: false;
}

int deleteAt(List *list, int loc){
	int ctr;
	if(loc<0 || loc>=list->count){
		for(ctr = loc; ctr>list->count; ctr++){
			list->elems[ctr] = list->elems[ctr+1];
			list->count--;
		}
	}
	return ctr;
}

bool deleteItem(List *list, DATA key){
	List temp, *trav;
	int arrlength = sizeof(list->elems)/sizeof(list->elems[0]);
	for(trav = list; arrlength!= 0 && trav->elems)
}

int deleteAllItem(List *list, DATA key){
	int ctr, temp;
	for(ctr=0, temp=0; ctr<list->count;){
		if(list->elems[ctr] != key){
			if(){
				list->elems[temp] = list->elems[ctr];
				temp++;
			}
		}else{
			ctr++;
		}
	}
	return temp;
}
