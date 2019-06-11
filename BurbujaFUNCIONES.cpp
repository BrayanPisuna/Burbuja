#include <iostream>

using namespace std;

void insertar (int arreglo[], int n);

void mostrar (int arreglo[], int n);

void burbuja (int arreglo[], int n);


int main()
{

int arreglo1234[]={};
int t;

cout<<"INGRESE EL TAMAÑO DEL ARREGLO: " <<endl;
cin>>t;

insertar(arreglo1234,t);
mostrar(arreglo1234,t);
burbuja(arreglo1234,t);
cout<<""<<endl;
mostrar(arreglo1234,t);


return 0;
}
void insertar (int arreglo[], int n){



 for (int i = 0 ; i < n ; i ++ ){

     cout<< "POSICION: " << i <<" :";
     cin >> arreglo [i];
 }


}

void mostrar (int arreglo[], int n){
for (int j = 0 ; j < n ; j ++ ){

     cout<<"|"<< arreglo[j] <<"|";

 }
}

void burbuja (int arreglo[], int n){
for (int k = 0 ; k<n ;k ++){

    // PARA COMPARAR

   for (int j = 0; j<n; j++){

    if (arreglo[j] > arreglo[j+1]){

         int aux;
         aux = arreglo[j];
         arreglo[j] = arreglo[j+1]; //EN LA POSICION CERO SE ALMACENA LO QUE ESTA EN LA POSCICION 1
         arreglo[j+1] = aux;
    }
   }
  }
}


