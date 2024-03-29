#include <iostream>
#include <stdlib.h>     /* malloc, free, rand */
using namespace std;

#define MAX_VALUE 50000

class Heap
{
private:
	int Array[MAX_VALUE];
	int length;
	int i;
public:
	Heap();
	void input(int numero, int largo);
	void swap(int&x, int& y);
	void down(int x);
	void up(int x);
	void output(int *arreglo);
	void sort();
};
Heap::Heap(){
	i = 1;
}
/*
* void Heap:input*
******************
* Agrega los valores al arreglo.
* Input:
* int numero, valor que se agrega al arreglo.
* int largo, Cantidad de numeros que se ingresaran
******
* Returns:
* no retorna nada 
*****/
void Heap::input(int numero,int largo)
{
	length = largo;
	Array[i]= numero;
	up(i);

	i++;
}
/*
* void Heap::swap
******************
* Espacio de intercambio de posición de dos numeros 
* Input:
*int& x , un numero 
*int& y, otro numero
******
* Returns:
* no retorna nada 
*****/
void Heap::swap(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}
/*
* void Heap::down
******************
* Espacio de intercambio de posición de dos numeros 
* Input: baja un numero en el heap.
*int x, numero a bajar.
******
* Returns:
* no retorna nada 
*****/

void Heap::down(int x)
{
	while((2*x <= length && Array[x] > Array[2*x]) || (2*x + 1 <= length && Array[x] > Array[2*x+1])) 
	{
		if(2*x+1 <= length && Array[2*x] > Array[2*x+1])
		{
			swap(Array[x], Array[2*x+1]);
			x = 2 * x + 1;
		}
		else
		{
			swap(Array[x], Array[2*x]);
			x = 2 * x;
		}
	}
}
/*
* void Heap::up
******************
* sube un numero en el heap
* Input:
*int x, numero a subir.
******
* Returns:
* no retorna nada 
*****/
void Heap::up(int x)
{
	while(x > 1)
	{
		if(Array[x] < Array[x/2])
		{
			swap(Array[x], Array[x/2]);
			x /= 2;
		}
		else
			break;
	}
}
/*
* Heap::output
******************
* Guarda el heap en del arreglo
* Input:
*int *arreglo, arreglo a cual se le implementa el heap.
******
* Returns:
* no retorna nada 
*****/
void Heap::output(int *arreglo)
{
	for(int i=length; i >= 1; --i){
		//cout << Array[i] << endl;
		arreglo[length-i] = Array[i];
	}
}
/*
* void Heap::sort
******************
* Ordena el arreglo de menor a mayor los numeros que este contiene 
* Input:
*no recibe nada 
******
* Returns:
* no retorna nada 
*****/
void Heap::sort()
{
	int len = length;
	while(length > 1)
	{
		swap(Array[1], Array[length]);
		length--;
		down(1);
	}

	length = len;
}


