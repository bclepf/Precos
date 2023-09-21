#include <stdio.h>

int main() {
    
    float preco[3][2] = {
        {15.00, 12.50},
        {13.00, 7.50},
        {100.00, 97.00}
    };
    float media[3];

    for (int i = 0; i < 3; i++) {
        media[i] = (preco[i][0] + preco[i][1]) / 2.0;
    }

    printf("Media de precos por produto:\n");
    for (int i = 0; i < 3; i++) {
        printf("%.2f\t", media[i]);
    }
    printf("\n");
    printf("Pressione qualquer tecla para sair...");
    getchar();
    return 0;
}