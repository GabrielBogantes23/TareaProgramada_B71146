#include <stdio.h>
#include <stdlib.h>

void convert();
void solve();
void validate();
void leerDatos();

int main(int argc, char* argv[]){
  if(argc <= 5){
    if(argv[1] == "convert"){
      convertir();
    }else if(argv[2] == "solve"){
      solve();
    }else if(argv[3] == "validate"){
      validate();
    }
    int filas = 0;
    int columnas = 0;
    int cantidadEntradas = 0;
    int cantidadSalidas = 0;
    leerDatos();
  }else{
    printf("Cantidad de eventos invalidos");
    return -1;
  }
}

void leerDatos(){
  scanf("%d %d %d %d", &filas, &columnas, &cantidadEntradas, &cantidadSalidas);
}
