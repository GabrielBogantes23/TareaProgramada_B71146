/**
  @author: Gabriel Bogantes Armijo B71146
  @brief: Programa encargado de recibir una matriz de tubos, revisar si puede fluir el agua y corregir las fugas.
**/

#include <stdio.h>
#include <stdlib.h>

void convertBinToTxt();
void convertTxtToBin();
void solve();
void validate();
void leerDatosArchivo();

int rows = 0;
int columns = 0;
int amountOfEntrances = 0;
int amountOfExits = 0;

struct tile{
    bool north;
    bool south;
    bool east;
    bool west;
    unsigned int id;
};

struct tile tile0;
tile0.north = false;
tile0.south = false;
tile0.east = false;
tile0.west = false;
tile0.id = 0;

struct tile tile1;
tile1.north = false;
tile1.south = false;
tile1.east = false;
tile1.west = true;
tile1.id = 1;

struct tile tile2;
tile2.north = false;
tile2.south = true;
tile2.east = false;
tile2.east = false;
tile2.id = 2;

struct tile tile3;
tile3.north = false;
tile3.south = true;
tile3.east = false;
tile3.west = true;
tile3.id = 3;

struct tile tile4;
tile4.north = false;
tile4.south = false;
tile4.east = true;
tile4.west = false;
tile4.id = 4;

struct tile tile5;
tile5.north = false;
tile5.south = false;
tile5.east = true;
tile5.west = true;
tile5.id = 5;

struct tile tile6;
tile6.north = false;
tile6.south = true;
tile6.east = true;
tile6.west = false;
tile6.id = 6;

struct tile tile7;
tile7.north = false;
tile7.south = true;
tile7.east = true;
tile7.west = true;
tile7.id = 7;

struct tile tile8;
tile8.north = true;
tile8.south = false;
tile8.east = false;
tile8.west = false;
tile8.id = 8;

struct tile tile9;
tile9.north = true;
tile9.south = false;
tile9.east = false;
tile9.west = true;
tile9.id = 9;

struct tile tileA;
tileA.north = true;
tileA.north = true;
tileA.east = false;
tileA.west = false;
tileA.id = 10;

struct tile tileB;
tileB.north = true;
tileB.south = true;
tileB.east = false;
tileB.west = true;
tileB.id = 11;

struct tile tileC;
tileC.north = true;
tileC.south = false;
tileC.east = true;
tileC.west = false;
tileC.id = 12;

struct tile tileD;
tileD.north = true;
tileD.south = false;
tileD.east = true;
tileD.west = true;
tileD.id = 13;

struct tile tileE;
tileE.north = true;
tileE.south = true;
tileE.east = true;
tileE.west = false;
tileD.id = 14;

struct tile tileF;
tileF.north = true;
tileF.south = true;
tileF.east = true;
tileF.west = true;
tileF.id = 15;

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
