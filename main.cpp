#include "tda-main.cpp"

void procesar(int* A,int n){
	//cout << A[0];
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
	//cout<<"Ingrese cantidad de numeros:\n";
	cin>>cantnum;
	int N;
	int cont;
	int *retorno = (int *) malloc(sizeof(int) * cantnum);
	while (cantnum != 0){
		Heap H;
		cont = cantnum;
		retorno = (int *) realloc(retorno, sizeof(int) * cantnum);
  		while (cont != 0){
  			//cout<<"Ingrese numero:\n";
  			cin >> N;
    		H.input(N,cantnum);
			cont --;
			}
		H.sort();
		H.output(retorno);
		procesar(retorno,cantnum);
		//cout << endl;
  		//cout<<"Ingrese cantidad de numeros\n";
  		cin>>cantnum;
  	}
  	free((void *) retorno);
 	return 0;
}
	

	
	//output pasamos puntero a arreglo y devuelve la wea ordena
	//input mete el num a la wea de prioridad
	//sort ordena la wea de prioridad
	