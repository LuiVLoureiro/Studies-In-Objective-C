#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura de um nó da árvore
struct No {
    int valor;               // Valor do nó
    struct No* esquerda;     // Ponteiro para o nó filho à esquerda
    struct No* direita;      // Ponteiro para o nó filho à direita
};

// Função para criar um novo nó
struct No* criarNo(int valor) {
    struct No* novoNo = (struct No*) malloc(sizeof(struct No));
    novoNo->valor = valor;
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;
    return novoNo;
}

// Função para inserir um novo valor na árvore
struct No* inserir(struct No* raiz, int valor) {
    if (raiz == NULL) { // Se a árvore está vazia, cria um novo nó
        return criarNo(valor);
    }

    if (valor < raiz->valor) { // Se o valor é menor, insere à esquerda
        raiz->esquerda = inserir(raiz->esquerda, valor);
    } else if (valor > raiz->valor) { // Se o valor é maior, insere à direita
        raiz->direita = inserir(raiz->direita, valor);
    }

    return raiz;
}

// Função para exibir a árvore em ordem (esquerda, raiz, direita)
void exibirEmOrdem(struct No* raiz) {
    if (raiz != NULL) {
        exibirEmOrdem(raiz->esquerda);      // Visita a subárvore esquerda
        printf("%d ", raiz->valor);         // Exibe o valor do nó atual
        exibirEmOrdem(raiz->direita);       // Visita a subárvore direita
    }
}

// Função principal
int main() {
    struct No* raiz = NULL;  // Inicializa a árvore vazia

    // Inserindo valores na árvore
    raiz = inserir(raiz, 5);
    inserir(raiz, 3);
    inserir(raiz, 7);
    inserir(raiz, 2);
    inserir(raiz, 4);
    inserir(raiz, 6);
    inserir(raiz, 8);

    // Exibindo a árvore em ordem
    printf("Árvore em ordem: ");
    exibirEmOrdem(raiz);

    return 0;
}
