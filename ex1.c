/*Ecrire un programme en langage C qui permute et 
affiche les valeurs de trois variables A, B, C 
de type entier qui sont entrées au clavier : */

#include <stdio.h>

int main() {
    int A, B, C , AIDE;

    printf("Entrez la valeur de A : ");
    scanf("%d", &A);

    printf("Entrez la valeur de B : ");
    scanf("%d", &B);

    printf("Entrez la valeur de C : ");
    scanf("%d", &C);

    printf("\nAvant permutation : A = %d, B = %d, C = %d\n", A, B, C);

    // Permutation des variables
    AIDE = A;
    A = C;
    C = B;
    B = AIDE ;

    printf("Apres permutation : A = %d, B = %d, C = %d\n", A, B, C);

    return 0;
}