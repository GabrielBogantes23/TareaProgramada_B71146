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
  tile0.validez[0] = 0;
  tile0.validez[1] = 0;
  tile0.validez[2] = 0;
  tile0.validez[3] = 0;
  
  tile0.id = 0;

  struct tile tile1;
  tile1.validez[0] = 0;
  tile1.validez[1] = 0;
  tile1.validez[2] = 0;
  tile1.validez[3] = 1;
  
  tile1.id = 1;

  struct tile tile2;
  tile2.validez[0] = 0;
  tile2.validez[1] = 1;
  tile2.validez[2] = 0;
  tile2.validez[3] = 0;
  
  tile2.id = 2;

  struct tile tile3;
  tile3.validez[0] = 0;
  tile3.validez[1] = 1;
  tile3.validez[2] = 0;
  tile3.validez[3] = 1;
  
  tile3.id = 3;

  struct tile tile4;
  tile4.validez[0] = 0;
  tile4.validez[1] = 0;
  tile4.validez[2] = 1;
  tile4.validez[3] = 0;

  tile4.id = 4;

  struct tile tile5;
  tile5.validez[0] = 0;
  tile5.validez[1] = 0;
  tile5.validez[2] = 1;
  tile5.validez[3] = 1;

  tile5.id = 5;

  struct tile tile6;
  tile6.validez[0] = 0;
  tile6.validez[1] = 1;
  tile6.validez[2] = 1;
  tile6.validez[3] = 0;

  tile6.id = 6;

  struct tile tile7;
  tile7.validez[0] = 0;
  tile7.validez[1] = 1;
  tile7.validez[2] = 1;
  tile7.validez[3] = 1;

  tile7.id = 7;

  struct tile tile8;
  tile8.validez[0] = 1;
  tile8.validez[1] = 0;
  tile8.validez[2] = 0;
  tile8.validez[3] = 1;
  
  tile8.id = 8;

  struct tile tile9;
  tile9.validez[0] = 1;
  tile9.validez[1] = 1;
  tile9.validez[2] = 0;
  tile9.validez[3] = 0;
  
  tile9.id = 9;

  struct tile tileA;
  tileA.validez[0] = 1;
  tileA.validez[1] = 1;
  tileA.validez[2] = 0;
  tileA.validez[3] = 0;
  
  tileA.id = 10;

  struct tile tileB;
  tileB.validez[0] = 1;
  tileB.validez[1] = 1;
  tileB.validez[2] = 0;
  tileB.validez[3] = 1;
  
  tileB.id = 11;

  struct tile tileC;
  tileC.validez[0] = 1;
  tileC.validez[1] = 0;
  tileC.validez[2] = 1;
  tileC.validez[3] = 0;

  tileC.id = 12;

  struct tile tileD;
  tileD.validez[0] = 1;
  tileD.validez[1] = 0;
  tileD.validez[2] = 1;
  tileD.validez[3] = 1;

  tileD.id = 13;

  struct tile tileE;
  tileE.validez[0] = 1;
  tileE.validez[1] = 1;
  tileE.validez[2] = 1;
  tileE.validez[3] = 0;

  tileD.id = 14;

  struct tile tileF;
  tileF.validez[0] = 1;
  tileF.validez[1] = 1;
  tileF.validez[2] = 1;
  tileF.validez[3] = 1;
  
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
