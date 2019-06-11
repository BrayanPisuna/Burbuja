#include <iostream>

using namespace std;

int main()
{

    int arreglo []={4,3,2,7,1,8};

    //PARA IMPRIMIR LAS POSICIONES DE NUESTROS ELEMENTOS
    for(int i = 0; i < 6 ;i++ ){
         cout<<arreglo[i];

    }

    for (int k = 0 ; k<6 ;k ++){

    // PARA COMPARAR

   for (int j = 0; j<5; j++){

    if (arreglo[j] > arreglo [j+1]){

         int aux;
         aux = arreglo[j];
         arreglo[j] = arreglo[j+1]; //EN LA POSICION CERO SE ALMACENA LO QUE ESTA EN LA POSCICION 1
         arreglo[j+1] = aux;
    }
   }
  }
    cout <<endl;
   for(int i = 0; i < 6 ;i++ ){
         cout<<arreglo[i];

    }

    return 0;
}
