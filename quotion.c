/*Ecrire un programme en langage C qui affiche 
le quotient et le reste de la division entière
 de deux nombres entiers entrés au clavier ainsi
  que le quotient rationnel de ces nombres. */

#include <stdio.h>

int main() {
    int num1, num2;
    float quotient_rationnel;

    printf("Entrez le premier nombre entier : ");
    scanf("%d", &num1);

    printf("Entrez le second nombre entier : ");
    scanf("%d", &num2);

    int quotient_entiers = num1 / num2;

    int reste = num1 % num2;

    quotient_rationnel = (float)num1 / num2;

    printf("Quotient entier : %d\n", quotient_entiers);
    printf("Reste : %d\n", reste);
    printf("Quotient rationnel : %.2f\n", quotient_rationnel);

    return 0;
}