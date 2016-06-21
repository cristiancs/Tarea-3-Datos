#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sstream>
using namespace std;

void procesar(A,n){
	int suma=A[0];
	int valor=0;
	int i=1;
	while(i<n){
		suma+=A[i];
		valor+=suma;
		i++;
	}
	cout<< valor <<endl;
}

int main(){
	int *A =(int *) malloc(sizeof(int) * 6);
	int i=1;
	while(i<7){
		A[i-1]=i;
		i++;
	}
	procesar(A,6);
	//resultado debiese ser 55.
	free((void *) A);
	return 0;
}
