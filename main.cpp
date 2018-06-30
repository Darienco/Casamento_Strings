#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <iostream>

using namespace std;


int checar_prefixo(char palavra[],char pcheck[]){

    int tam = strlen(pcheck);
    bool ehPrefixo = true;

    for(int i=0; i<tam; i++){

     //       cout << "palavra: "<< palavra[i] << " pcheck: "<< pcheck[i]<<endl;

            if(palavra[i] != pcheck[i]){
                ehPrefixo = false;
            //   break;
            }
    }

        if(ehPrefixo){
            printf("E um prefixo");
        }else{
            printf("Nao e um prefixo");
        }

    return 0;
    }


int checar_subpalavra(char palavra[],char pcheck[]){

    int tam = strlen(palavra);
    int tam_c = strlen(pcheck);
    bool ehSub = false;


    int sinal = 0;
    for(int i=0; i<tam; i++){

          //  cout << "palavra: "<< palavra[i] << " pcheck: "<< pcheck[sinal]<<endl;

            if(palavra[i] != pcheck[sinal]){
                sinal=0;
            }else{
                sinal++;
                if(sinal==tam_c){
                    ehSub = true;
                    break;
                }

            }
    }

        if(ehSub){
            printf("E uma subpalavra");
        }else{
            printf("Nao e uma subpalavra");
        }

    return 0;
    }

int checar_sufixo(char palavra[], char pcheck[]){

    int tam_p = strlen(palavra);
    int tam_c = strlen(pcheck);
    bool ehSufixo = true;


        for(int i=tam_p-1,j=tam_c-1; j>=0 ; i--,j--){

          //  cout << "palavra: "<< palavra[i] << " pcheck: "<< pcheck[j]<<endl;

            if(palavra[i] != pcheck[j]){
                ehSufixo = false;
            }
}
        if(ehSufixo){
            printf("E um sufixo");
        }
        else{
            printf("Nao e um sufixo");
        }

    return 0;
}


int main(){

    char palavra[50] = {0}; // palavra
    char pcheck[50] = {0}; // variavel para checagem.
    bool check;



    puts("Insira a primeira palavra");
    gets(palavra);

    puts("Insira a segunda palavra");
    gets(pcheck);

    puts("\n");

    checar_prefixo(palavra,pcheck);
    puts("\n");
    checar_sufixo(palavra,pcheck);
    puts("\n");
    checar_subpalavra(palavra,pcheck);
    puts("\n");


return 0;
}
