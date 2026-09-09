#include <stdio.h>
#include <stdlib.h>
int main() {
    int num;
    printf("Digite o número de pessoas: ");
    scanf("%d", &num);

    if(num <= 100) {

    //Vetor + alocação dinamica;
    char **mat = (char**) malloc (num * sizeof(char));

    for (int i = 0; i < num; i++) {
        mat[i] = malloc(50 * sizeof(char));
        }

    for (int i = 0; i < num; i++) {
            printf("Digite o nome completo de cada pessoa: ");
            scanf("%c", &mat[i][1]);
    }

     int **id = (int**) malloc (num * sizeof(int));

    for (int i = 0; i < num; i++) {
        id[i] = malloc(1 * sizeof(int));
        }

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Digite a idade de cada pessoa: ");
            scanf("%d", &id[i][j]);
        }
    }

    for (int i = 0; i < num; i++) {
        printf("\n");
        for (int j = 0; j < num; j++) {
        printf("%d ", mat[i][j]);
        }  
    }
}
    return 0;
}