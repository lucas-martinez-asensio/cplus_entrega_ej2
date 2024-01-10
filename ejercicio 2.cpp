#include <stdio.h>


int main() {
    char cadenaEntrada[100];
    int largo = 0;

    printf("ingresa la cadena a modificar: ");
    gets(cadenaEntrada);

    while(cadenaEntrada[largo] != '\0'){

        if(cadenaEntrada[largo] >= 65 || cadenaEntrada[largo] <= 90 || cadenaEntrada[largo] >= 97 || cadenaEntrada[largo] <= 122 ){
            if(cadenaEntrada[largo]=='a'||cadenaEntrada[largo]=='A'||cadenaEntrada[largo]=='e'||cadenaEntrada[largo]=='E'||cadenaEntrada[largo]=='i'||cadenaEntrada[largo]=='I'||cadenaEntrada[largo]=='o'||cadenaEntrada[largo]=='O'||cadenaEntrada[largo]=='u'||cadenaEntrada[largo]=='U'){

            }   else{
                cadenaEntrada[largo] = ' ';
            }
        }


        largo++;
    }

    printf("%s",cadenaEntrada);


return 0;
}

