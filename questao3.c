//da questao 1
#include <stdio.h>
#include <stdlib.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

void exibe(struct Caixa* p) {
    while (p != NULL) {
        printf("%d ", p->valor);
        p = p->prox;
    }
    printf("\n");
}

int main() {
    struct Caixa* c1 = (struct Caixa*) malloc(sizeof(struct Caixa));
    struct Caixa* c2 = (struct Caixa*) malloc(sizeof(struct Caixa));
    struct Caixa* c3 = (struct Caixa*) malloc(sizeof(struct Caixa));
    struct Caixa* c4 = (struct Caixa*) malloc(sizeof(struct Caixa));
    struct Caixa* c5 = (struct Caixa*) malloc(sizeof(struct Caixa));

    c1->valor = 1;
    c2->valor = 3;
    c3->valor = 9;
    c4->valor = 7;
    c5->valor = 5;

    c1->prox = c2;
    c2->prox = c3;
    c3->prox = c4;
    c4->prox = c5;
    c5->prox = NULL;

    struct Caixa* p = c1;
    while (p != NULL) {
        printf("%d ", p->valor);
        p = p->prox;
    }
    printf("\n");
