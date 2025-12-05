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

// da questao 3

struct Caixa* cabeca = c1;      //cabeca é um ponteiro para o primeiro nó, e ele é ihual a c1, mostrando justamente que ele aponta para o primeiro elemento

struct Caixa* aux = cabeca;    //ponteiro auxiliar para percorrer os nós. Remover índice 2, 2=c3, tem que passar pelo c1 e c2. esse passo faz o aux apontar para c1

for (int i = 0; i < 1; i++) {  //avançar até o nó anterior ao que será removido, o de indice 1, que no caso é c2
    aux = aux->prox;
}

//aux agora aponta para c2
struct Caixa* removida = aux->prox;  // removida = c3, pq? pq o aux está em c2, e o removida recebe o proximo de c2, que é o c3
aux->prox = removida->prox;          // pular o nó removido, o prox do aux que seria o c3, recebe o proximo do removida que é o c4
removida->prox = NULL;               // para que o prox de c3 não aponte pra c4, eu tambem desconecto ele, fazendo o poteiro para o prox apontar para nulo

printf("Após remover índice 2:\n");
exibe(cabeca); // exibo tudo com a remoçao

removida->prox = cabeca; // reinseriro removida no início
cabeca = removida;    // o ponteiro para o inicio aponta para o novo inicio, o que antes era o c3

printf("Após reinserir no início:\n");
exibe(cabeca);
