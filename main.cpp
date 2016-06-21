#include "tda-main.cpp"

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
    		/*H.input(N);
    		H.sort();
			int *retorno = (int *) malloc(sizeof(int) * cantnum); ACA OCURRE LA MAGIA
			free((void *) retorno);
			H.output(retorno);*/
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
	