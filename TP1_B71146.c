#include <stdio.h>
#include <stdlib.h>

void convertBinToTxt();
void convertTxtToBin();
void solve();
void validate();
void leerDatosArchivo();

int filas = 0;
int columnas = 0;
int cantidadEntradas = 0;
int cantidadSalidas = 0;
int posicionFilas = 0;
int posicionColumnas = 0;
int direccion = 0;

struct Posicion{
  int posiciones[2];
  char direccion;
};

int main(int argc, char* argv[]){
  if(argc <= 5 || argc >= 2){
    if(argv[1] == "convert"){
      if(argv[2] == "ib"){
        convertBinToTxt();
      }else if(argv[2] == "it"){
        convertTxtToBin();
      }
    }else if(argv[1] == "solve"){
      if(argc == 3)
      solve();
    }else if(argv[1] == "validate"){
      validate();
    }
    leerDatosArchivo();
  }else{
    printf("Cantidad de argumentos invalidos, ingrese la cantidad correcta.");
    return -1;
  }
}

void convertBinToTxt(){
  printf("Llamado Bin to Txt");
}

void convertTxtToBin(){
  printf("Llamado Txt to Bin");
}

void leerDatosArchivo(){
  scanf("%d %d %d %d", &filas, &columnas, &cantidadEntradas, &cantidadSalidas);
  while(scanf("%d %d %c", &posicionFilas, &posicionColumnas, &direccion) != EOF){

  }
}
