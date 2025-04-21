#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "AVL.h"
#define true 1
#define false  0

int main(){
    PONT raiz;
    inicializar(&raiz);
    bool alterou;
    TIPOCHAVE chave;
    int opcao;

    printf("Escolha uma das opções:\n");
    printf("---MENU ARVORE DE BUSCA  BALANCEADA--\n1.Inserir Chave\n 2.Exibir AVL em Ordem\n 3.Buscar Chave\n 4.Excluir Chave\n 5.Sair\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:    
            printf("Digite o valor da chave: ");
            scanf("%d &chave");
            alterou = false;
            inserirAVL(&raiz, chave, &alterou);
            printf("Chave %d inserida! ", chave);
            break;
        
        case 2:
            printf("AVL em Ordem: ");
            exibirArvoreEmOrdem(raiz);
            printf("\n");
            break;
        
        case 3:
            printf("Digite a chave a ser buscada: ");
            scanf("%d", &chave);
            

        }


}