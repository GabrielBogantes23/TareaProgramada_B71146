/**
  @author: Gabriel Bogantes Armijo B71146
  @brief: This program's main function is to simulate a famously old pipe leak game. It has to recieve a
          matrix from the standar library and check whether it has any leaks or not, and if it has any
          leaks, print in a file or a console the corrected matrix.
**/

//Se importan las librerías
#include <stdio.h>
#include <stdlib.h>

void convertBinToTxt();
void convertTxtToBin();
void solve();
void validate();
void leerDatos();

int rows = 0;
int columns = 0;
int amountOfHydrants = 0;
int amountOfDrains = 0;

struct tile{
    //Verifica la validez en el siguiente orden: Norte, SUr, Este, Oeste
    int validez[4];
    unsigned int id;
};


int main(int argc, char* argv[]){

  struct tile tile0;
  validez[0] = 0;
  validez[1] = 0;
  validez[2] = 0;
  validez[3] = 0;
  tile0.id = 0;

  struct tile tile1;
  validez[0] = 0;
  validez[1] = 0;
  validez[2] = 0;
  validez[3] = 1;
  
  tile1.id = 1;

  struct tile tile2;
  validez[0] = 0;
  validez[1] = 1;
  validez[2] = 0;
  validez[3] = 0;
  
  tile2.id = 2;

  struct tile tile3;
  validez[0] = 0;
  validez[1] = 1;
  validez[2] = 0;
  validez[3] = 1;
  
  tile3.id = 3;

  struct tile tile4;
  validez[0] = 0;
  validez[1] = 0;
  validez[2] = 1;
  validez[3] = 0;

  tile4.id = 4;

  struct tile tile5;
  validez[0] = 0;
  validez[1] = 0;
  validez[2] = 1;
  validez[3] = 1;

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

  leerDatos();
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

void validate(){

}

void solve(){

}

void convertBinToTxt(){
  printf("Llamado Bin to Txt");
}

void convertTxtToBin(){
  printf("Llamado Txt to Bin");
}

void leerDatos(){
  scanf("%d %d %d %d", &rows, &columns, &amountOfHydrants, &amountOfDrains);
  while(scanf("%d ",))
}
