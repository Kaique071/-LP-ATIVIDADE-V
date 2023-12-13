#include <stdio.h>
#include <string.h>

struct Livros {
    char nome[50];
    float Preco[5];
    char Autor[50];
    int  ano;
};

char* encontrarLivro(struct Livros listaLivros[], int tamanhoLista, const char* nomeAlvo) {
    int i;
    for ( i = 0; i < tamanhoLista; i++) {
        if (strcmp(listaLivros[i].nome, nomeAlvo) == 0) {
            return listaLivros[i].Preco;
        }
    }
    return NULL;
}

int main() {
   int i;
   int opcao;
    struct Livros listaLivros[4];


  system("cls || clean");



    
        printf("\nSistema de Gestao de Biblioteca\n");
        printf("1. cadastrar Livros\n");
        printf("2. Mostrar Livros cadastrados\n");
        printf("3. Sair Do Programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);


     do
     {
        switch (opcao)
        {
        case 1:
            
           for ( i = 0; i < 4; i++) {
        printf("Cadastro do Livro %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", listaLivros[i].nome);
        printf("Preco do Livro: ");
        scanf("%d", listaLivros[i].Preco);
        printf("Nome do Autor: ");
        scanf("%s", listaLivros[i].Autor);
        printf("Ano do livro:");
        scanf("%d", listaLivros[i].ano);
            break;}

        case 2:
        for ( i = 0; i < 4; i++){     
 printf("Cadastro do Livro %d:\n", i + 1);
        printf("Nome do %d livro: %s ",i+1 ,listaLivros[i].nome);
        printf("Preco do %d Livro: %.2f",i+1,listaLivros[i].Preco);
        printf("Nome do Autor do %d livro e: ",i+1,listaLivros[i].Autor);
        printf("Ano do  %d livro e  %d:",i+1,listaLivros[i].ano);
        break;
        }

        case 3:
        printf("saindo do programa!");

        default:
            break;}



     } while (opcao != 3);
     
   
     
 
    return 0;
}