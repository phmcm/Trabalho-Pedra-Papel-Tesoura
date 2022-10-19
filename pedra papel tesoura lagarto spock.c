#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define PEDRA = 1
#define PAPEL = 2
#define TESOURA = 3
#define LAGARTO = 4
#define SPOCK = 5
int main(){
    int x,y,z,pedra,papel,tesoura,lagarto,spock,e = 0,vc = 0,vj = 0;
    bool done = false;
    while(!done)
    {
    printf("\n1-Pedra\n2-Papel\n3-Tesoura\n4-Lagarto\n5-Spock");
    printf("\nEscolha uma opcao: ");
    scanf("%d",&x);
    if(x < 1 || x > 5)
    do
    {
        printf("Opcao invalida, digite outro valor: ");
        scanf("%d",&x);
    }while(x < 1 || x > 3);
    switch(x)
    {
        case 1:
        pedra = x;
        break;
        case 2:
        papel =  x;
        break;
        case 3:
        tesoura = x;
        break;
        case 4:
        lagarto = x;
        break;
        case 5:
        spock = x;
        break;
    }
    y = rand() % 5+1;
    printf("\nJogador --> ");
    printf("%d",x);
    printf("\n     \nVS.\n");
    printf("\nComputador --> ");
    printf("%d\n",y);
    if(x == y)
        {   
            printf("\nEmpate :/");
            e++;
        }
    else if(x == 1 && y == 5)
            {
                printf("\nVoce perdeu :(");
                vc++;
            }
    else if(x == 1 && y == 4)
            {
                printf("\nVoce ganhou :)");
            }
    else if(x == 1 && y == 3)
            {   
                printf("\nVoce ganhou! :)");
                vj++;
            }
    else if(x == 1 && y == 2)
            {   
                printf("\nVoce perdeu :(");
                vc++;
            }
    else if(x == 2 && y == 1)
            {
                printf("\nVoce ganhou! :)");
                vj++;
            }
    else if(x == 2 && y == 3)
            {   printf("\nVoce perdeu :(");
                vc++;
            }
    else if(x == 2 && y == 4)
            {
                printf("\nVoce perdeu :(");
                vc++;
            }
    else if(x == 2 && y == 5)
            {
                printf("\nVoce ganhou! :)");
                vj++;
            }
    else if(x == 3 && y == 1)
            {
                printf("\nVoce perdeu :(");
                vc++;
            }
    else if(x == 3 && y == 2)
            {
                printf("\nVoce ganhou! :)");
                vj++;
            }
    else if(x == 3 && y == 4)
            {
                printf("\nVoce ganhou :)");
                vj++;
            }
    else if(x == 3 && y == 5)
            {
                printf("\nVoce perdeu :(");
                vc++;
            }
    else if(x == 4 && y == 1)
            { 
                printf("\nVoce perdeu :(");
                vc++;
            }
    else if(x == 4 && y == 2)
            {
                printf("\nVoce ganhou! :)");
                vj++;
            }
    else if(x == 4 && y == 3)
            {
                printf("\nVoce perdeu :(");
                vc++;
            }
    else if(x == 4 && y == 5)
            {
                printf("\nVoce ganhou! :)");
                vj++;
            }
    else if(x == 5 && y == 1)
            {
                printf("\nVoce ganhou! :)");
                vj++;
            }
    else if(x == 5 && y == 2)
            { 
                printf("\nVoce perdeu :(");
                vc++;
            }
    else if(x == 5 && y == 3)
            {
                printf("\nVoce ganhou! :)");
                vj++;
            }
    else if(x == 5 && y == 4)
            {
                printf("\nVoce perdeu :(");
                vc++;
            }
    printf("\n\n\nJogar Novamente?\n1.Sim\n2.Nao\n");
    scanf("%d",&z);
    while(z != 1 && z !=2){
        printf("Opcao invalida, digite outro valor: ");
        scanf("%d",&z);
    }
        if(z == 2)
            {
                done = true;
                printf("Vitorias do Jogador: %d\n",vj);
                printf("Vitorias do Computador: %d\n",vc);
                printf("Empates: %d\n",e);
                printf("Obrigado por jogar!");
            }          
        }
}