#include <stdio.h>
int main() {
    float centimetros,metros;
    centimetros = metros = 0;
    printf("Digite o valor em metros:\n-->");
    scanf("%f",&metros);
    centimetros = metros*100;
    printf("%.2f metros e igual a %.2f centimetros",metros,centimetros);
    return 0;
}
