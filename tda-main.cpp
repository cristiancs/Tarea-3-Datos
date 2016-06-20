#include <iostream>
#include <stdlib.h>     /* malloc, free, rand */
using namespace std;

#define MAX_VALUE 50000

class Heap
{
private:
	int Array[MAX_VALUE];
	int length;
public:
	Heap();
	void input(int i);
	void swap(int&x, int& y);
	void down(int x);
	void up(int x);
	void output(int *arreglo);
	void sort();
};
Heap::Heap(){
	length = 1;
}
void Heap::input(int i)
{
	Array[length] = i;
	up(i);
	length++;
}

void Heap::swap(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}

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

void Heap::output(int *arreglo)
{
	for(int i=length-1; i >= 1; --i){
		arreglo[i] = Array[i];
	//	cout<<Array[i]<<' ';
	}
	cout<<endl;
}


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


int main(){
	Heap H;
	H.input(5);
	H.input(2);
	H.input(4);
	H.sort();
	int *retorno = (int *) malloc(sizeof(int) * 3);
	H.output(retorno);
	for(int i=0; i < 3; ++i){
		//arreglo[i] = Array[i];
		cout<<retorno[i]<<' ';
	}
	free((void *) retorno);
}