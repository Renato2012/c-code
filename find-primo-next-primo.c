#include<stdio.h>

int main() {
    int num;
    printf("Digite um número inteiro positivo:\n");
    scanf("%d", &num);
    
    while(1){
        int div = 0;
        // encontrar qtd div para o num    
        for(int i = 1; i <= num; i++){
            if(num % i == 0)
                div++;
        }
        if(div == 2){
            printf("Primo: %d", num);
            break;
        }
        else {// encontrar o próximo primo
            num++;
        }
    }
    
    return 0;
}
