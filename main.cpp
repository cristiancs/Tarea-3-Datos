#include "tda-main.cpp"

void procesar(int* A,int n){
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
	int cantnum;
	cout<<"Ingrese cantidad de numeros:\n";
	cin>>cantnum;
	Heap H;
	int N;
	int cont;
	while (cantnum != 0){
		cont = cantnum;
  		while (cont != 0){
  			cout<<"Ingrese numero:\n";
  			cin >> N;
    		H.input(N);
    		H.sort();
			int *retorno = (int *) malloc(sizeof(int) * cantnum);
			H.output(retorno);
			procesar(retorno,cantnum);
			free((void *) retorno);
			cont --;
			}
  		cout<<"Ingrese cantidad de numeros\n";
  		cin>>cantnum;
  	}
 	return 0;
}
	

	
	//output pasamos puntero a arreglo y devuelve la wea ordena
	//input mete el num a la wea de prioridad
	//sort ordena la wea de prioridad
	