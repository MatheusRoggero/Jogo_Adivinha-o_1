#include <stdio.h>

int main(){
  printf("***********************************\n");
  printf("Bem-vindo ao Jogo de Adivinhação *\n");
  printf("***********************************\n");

    int chute;
    int numerosecreto = 500;
    printf("Qual seu chute? \n");
  scanf("%d",&chute);
    printf("Você chutou o número %d!\n",chute);
   
         if (chute == numerosecreto){
         printf("Parabéns Acertou na mosca :) !!\n");
           }
         else {
            if(chute > numerosecreto){
              printf("Seu Chute foi maior que o Número Secreto :( \n");
            }

           if(chute < numerosecreto){
           printf("Seu Chute foi menor que o Número Secreto :( \n ");
           
           } 
            

         }

}
