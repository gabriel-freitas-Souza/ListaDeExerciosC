#include <stdio.h>
float soma(float x,float y){
    float result = x+y;
    return result;
}
int main() {
    float number[2],result=0;
    for(int i = 0;i < 2;i++){
        printf("Digite o numero %i\n-->",i+1);
        scanf("%f",&number[i]);
    }
    result = soma(number[0],number[1]);
    printf("O resultado e %.2f",result);
    return 0;
}
