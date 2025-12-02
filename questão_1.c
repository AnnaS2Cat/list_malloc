#include <stdio.h>
#include <stdlib.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};
int main() {
    struct Caixa* c1 = (struct Caixa*) malloc(sizeof(struct Caixa));    //estou criando cada caixa com malloc
    struct Caixa* c2 = (struct Caixa*) malloc(sizeof(struct Caixa));
    struct Caixa* c3 = (struct Caixa*) malloc(sizeof(struct Caixa));
    struct Caixa* c4 = (struct Caixa*) malloc(sizeof(struct Caixa));
    struct Caixa* c5 = (struct Caixa*) malloc(sizeof(struct Caixa));

    c1->valor = 1;   // atribuindo valores (elementos do nó)
    c2->valor = 3;
    c3->valor = 9;
    c4->valor = 7;
    c5->valor = 5;

    c1->prox = c2;    //encadeando
    c2->prox = c3;
    c3->prox = c4;
    c4->prox = c5;
    c5->prox = NULL;

    struct Caixa* atual = c1;              // imprimo a lista
    while (atual != NULL) {               //enquanto não chegar no último nó
        printf("%d ", atual->valor);     //imprimo os valores
        atual = atual->prox;            //avanço o nó
    }

    printf("\n");

    free(c1);   //liberando a memória presa nos ponteiros
    free(c2);
    free(c3);
    free(c4);
    free(c5);

    return 0;
}
