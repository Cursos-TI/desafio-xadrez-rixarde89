#include <stdio.h>


int main() {
    int b = 0;
    
    
    // Mover a torre 5 casas para a direita 
    for (int t = 0; t < 5; t++) {
        printf("Torre se movendo para a,");
        printf("Direita\n");  //Impime a direção do movimento da torre
    }

    while (b <= 5) {

      printf("%d\n", b);
      printf("Bispo se movendo na diagonal para ");
      printf("cima, e a direita");
      b++;
    }
    

    return 0;
}
