#include <stdio.h>
#include <stdlib.h>
void conversor_hexa_binario(char hexa[]);
int main()
{
    char hexa[100000];
    printf("Enter a string: ");
    scanf("%[^\n]", &hexa);
    printf("%s \n", hexa);
    conversor_hexa_binario(hexa);
}

void conversor_hexa_binario(char hexa[]){
    for(int cont = 0; cont < strlen(hexa); cont++){
        if(hexa[cont] == '0'){
            printf("0000");
        }
                if(hexa[cont] == '1'){
            printf("0001");
        }
                if(hexa[cont] == '2'){
            printf("0010");
        }
                if(hexa[cont] == '3'){
            printf("0011");
        }
                if(hexa[cont] == '4'){
            printf("0100");
        }
                if(hexa[cont] == '5'){
            printf("0101");
        }
                if(hexa[cont] == '6'){
            printf("0110");
        }
                if(hexa[cont] == '7'){
            printf("0111");
        }
                if(hexa[cont] == '8'){
            printf("1000");
        }
                if(hexa[cont] == '9'){
            printf("1001");
        }
                if(hexa[cont] == 'A'){
            printf("1010");
        }
                if(hexa[cont] == 'B'){
            printf("1011");
        }
                if(hexa[cont] == 'C'){
            printf("1100");
        }
                if(hexa[cont] == 'D'){
            printf("1101");
        }
                if(hexa[cont] == 'E'){
            printf("1110");
        }
                if(hexa[cont] == 'F'){
            printf("1111");
        }
    }
}
