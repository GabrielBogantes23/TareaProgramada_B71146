/**
  @author: Gabriel Bogantes Armijo B71146
  @brief: This program's main function is to simulate a famously old pipe leak game. It has to recieve a
          matrix from the standar library and check whether it has any leaks or not, and if it has any
          leaks, print in a file or a console the corrected matrix.
**/

//Libraries that are going to be used.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Function declaration
void convertBinToTxt();
void convertTxtToBin();
void solve();
void validate();
void readData();

//Variables made to save rows, columns, amount of hydrants, and amount of drains.
int rows = 0;
int columns = 0;
int amountOfHydrants = 0;
int amountOfDrains = 0;

struct tile{
    //Verifica la validez en el siguiente orden: Norte, SUr, Este, Oeste
    int validez[4] = {0,0,0,0};
    char id;
};

//Main function.
int main(int argc, char* argv[]){

  //Check the amount of arguments.
  if(argc <= 6 && argc >= 2){
    //Cases where the user wants to convert.
    printf("cantidad de argumentos: %d\n",argc);
    if(strcmp("convert", argv[1]) == 0){
        if(strcmp("-it", argv[2]) == 0 || strcmp("-it", argv[4]) == 0){
          printf("El input es en txt\n");
        }else if(strcmp("-ot", argv[2]) == 0 || strcmp("-ot", argv[4]) == 0){
          printf("El output es en txt\n");
        }else if(strcmp("-ib", argv[2]) == 0 || strcmp("-ib", argv[4]) == 0){
          printf("El input es en bin\n");
        }else if(strcmp("-ob", argv[2]) == 0 || strcmp("-ob", argv[4]) == 0){
          printf("El output es en bin\n");
        }else{
          printf("Los argumentos fueron ingresados incorrectamente");
        }
      }else if(strcmp("validate", argv[1]) == 0){
        if(argc == 3){
          if(strcmp("-it", argv[2]) == 0){
            printf("Validar con it\n");
          }else if(strcmp("-ib", argv[2]) == 0){
            printf("Validar con ib\n");
          }
        }else{
          printf("Validar con it\n");
        }
      }else if(strcmp("solve", argv[1]) == 0){
        if(strcmp("-ib", argv[2]) == 0){
          printf("leer binario");
          printf("solve");
        }else if(strcmp("-it", argv[2]) == 0){
          printf("leer texto");
          printf("solve");
        }
      }else if(strcmp("--help", argv[1] == 0){
      printf("You can do three things regarding the commands you input:\n");
      printf("1. 'validate': when you enter this as your first argument, the program will check if there are any leaks within the specified pipeline.");
      printf("\nHowever, you also have the option to tell in which format the validation will be done, ");
    }else
}

//Function that creates tiles.
void createTile(char id){
  if(id == '0'){
    struct tile tile0;
    tile0.validez[0] = 0;
    tile0.validez[1] = 0;
    tile0.validez[2] = 0;
    tile0.validez[3] = 0;

    tile0.id = 0;

  }else if(id == '1'){
    struct tile tile1;
    tile1.validez[0] = 0;
    tile1.validez[1] = 0;
    tile1.validez[2] = 0;
    tile1.validez[3] = 1;

    tile1.id = 1;

  }else if(id == '2'){
    struct tile tile2;
    tile2.validez[0] = 0;
    tile2.validez[1] = 1;
    tile2.validez[2] = 0;
    tile2.validez[3] = 0;

    tile2.id = 2;

  }else if(id == '3'){
    struct tile tile3;
    tile3.validez[0] = 0;
    tile3.validez[1] = 1;
    tile3.validez[2] = 0;
    tile3.validez[3] = 1;

    tile3.id = 3;

  }else if(id == '4'){
    struct tile tile4;
    tile4.validez[0] = 0;
    tile4.validez[1] = 0;
    tile4.validez[2] = 1;
    tile4.validez[3] = 0;

    tile4.id = 4;

  }else if(id == '5'){
    struct tile tile5;
    tile5.validez[0] = 0;
    tile5.validez[1] = 0;
    tile5.validez[2] = 1;
    tile5.validez[3] = 1;

    tile5.id = 5;

  }else if(id == '6'){
    struct tile tile6;
    tile6.validez[0] = 0;
    tile6.validez[1] = 1;
    tile6.validez[2] = 1;
    tile6.validez[3] = 0;

    tile6.id = 6;

  }else if(id == '7'){
    struct tile tile7;
    tile7.validez[0] = 0;
    tile7.validez[1] = 1;
    tile7.validez[2] = 1;
    tile7.validez[3] = 1;

    tile7.id = 7;

  }else if(id == '8'){
    struct tile tile8;
    tile8.validez[0] = 1;
    tile8.validez[1] = 0;
    tile8.validez[2] = 0;
    tile8.validez[3] = 1;

    tile8.id = 8;

  }else if(id == '9'){
    struct tile tile9;
    tile9.validez[0] = 1;
    tile9.validez[1] = 1;
    tile9.validez[2] = 0;
    tile9.validez[3] = 0;

    tile9.id = 9;

  }else if(id == 'A'){
    struct tile tileA;
    tileA.validez[0] = 1;
    tileA.validez[1] = 1;
    tileA.validez[2] = 0;
    tileA.validez[3] = 0;

    tileA.id = A;

  }else if(id == 'B'){
    struct tile tileB;
    tileB.validez[0] = 1;
    tileB.validez[1] = 1;
    tileB.validez[2] = 0;
    tileB.validez[3] = 1;

    tileB.id = B;

  }else if(id == 'C'){
    struct tile tileC;
    tileC.validez[0] = 1;
    tileC.validez[1] = 0;
    tileC.validez[2] = 1;
    tileC.validez[3] = 0;

    tileC.id = C;

  }else if(id == 'D'){
    struct tile tileD;
    tileD.validez[0] = 1;
    tileD.validez[1] = 0;
    tileD.validez[2] = 1;
    tileD.validez[3] = 1;

    tileD.id = D;

  }else if(id == 'E'){
    struct tile tileE;
    tileE.validez[0] = 1;
    tileE.validez[1] = 1;
    tileE.validez[2] = 1;
    tileE.validez[3] = 0;

    tileD.id = E;

  }else if(id == 'F'){
    struct tile tileF;
    tileF.validez[0] = 1;
    tileF.validez[1] = 1;
    tileF.validez[2] = 1;
    tileF.validez[3] = 1;

    tileF.id = F;
  }
}

//Function that fills matrix with structs
void fillMatrix(){

  for(int rowIndex = 0; rowIndex < rows; rowIndex++){
    for(int columnIndex = 0; columnIndex < columns; columnIndex++){
      
    }
  }
}

//Function that validates if the pipe has any leaks
bool validate(){

}

//Function that solves if there are any pipe leaks.
void solve(){

}

//Function that converts from Binary to Text. 
void convertBinToTxt(){
  printf("Llamado Bin to Txt");
}

//Function that converts from Text to Binary.
void convertTxtToBin(){
  printf("Llamado Txt to Bin");
}

//Function that reads data from files.
void readDataFromFile(){
  FILE *file;
  file = fopen();
  if(file == NULL){
    printf("\nFile is empty!\n");
    return -1;
  }else{
    printf("File content: \n");
    fscanf("
      fscanf("%d %d %d %d\n", &rows, &columns, &amountOfHydrants, &amountOfDrains);
      char matrix[rows][columns];
      for(int index = 0; index < amountOfHydrants; index++){
        
      }
    }
  }
}

//Function that reads data from console input.
void readDataFromConsole(){
  
}
