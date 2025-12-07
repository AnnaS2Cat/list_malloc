struct Caixa* L = NULL;   //lista começa vazia
int x;

printf("Digite valores (digite -1 para parar):\n");

scanf("%d", &x);
while (x != -1) {
    L = insere(L, x); //atualiza a lista L com os novos valores inseridos no lugar correto
    scanf("%d", &x); //continuo perguntando para o usuario até ele digitar -1
}

exibe(L);  //mostra a lista no final
