/********************************/
/* Code 			                  */
/* donne la taille des types	  */
/* (c)2021  18/10 Bogt		      */
/********************************/

#include <stdlib.h>   /* librairie standard C prototype */
#include <stdio.h>    /* library standard Input/Output */

int main(int argc, char **argv){
  printf("Les tailles de variables en octets : \n");
  printf("long        : %d\n",sizeof(long));
  printf("float       : %d\n",sizeof(float));
  printf("double      : %d\n",sizeof(double));
  printf("int         : %d\n",sizeof(int));
  printf("short       : %d\n",sizeof(short));
  printf("char        : %d\n",sizeof(char));
  printf("int long    : %d\n",sizeof(int long));
  return EXIT_SUCCESS;
}