#include <stdio.h>
#include <cstring>
#include <stdlib.h>//this is where memory allocation functions are declared
//malloc - allocates memory
//calloc - allocates memory and initializes
//realloc - allocates additional memory
//free - clears memory

int main() {
	//int* p{ (int *)malloc(sizeof(int)) };
	//*p = 5;
	//printf("%d", *p);
	//free(p); //now a very dangerous dangling pointer - p still holds the memory address, but it is now invalid
	//p = NULL;
	
	int* p{ (int*)calloc(5, sizeof(int)) }; //5 is the number of allocations
	if (p == NULL) {
		printf("Failed to allocate memory \n");
		return -1;
	}
	*p = 5;
	printf("%d", *p);
	free(p); //now a very dangerous dangling pointer - p still holds the memory address, but it is now invalid
	//if the memory is not freed, it is called a memory leak
	p = NULL;

	//dynamic memory reallocation methods
//new - allocates
// delete - releases
//<type> *<variable> = new <type>(optional args);
//delete <variable>



}
//new is superior lol
void New(){
	int* p = new int(5);
	*p = 6;
	delete p;
	p = nullptr;
}

void NewArr() {
	int* p = new int[5] {1, 2, 3, 4, 5};
	//sometimes use a for loop to populate new array if you don't have the values at initialization
	delete []p;
	p = nullptr;
}

void Strings() {
	char* p = new char[4];
	strcpy(p, "C++"); //1 extra byte for null terminating
	delete[p];
}