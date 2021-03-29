#include <stdio.h>
#include <math.h>
int main() {
    const float pi = 3.14159;
    float raio,area;
    raio = area =0;
    printf(" Digire o valor do raio\n--> ");
    scanf("%f",&raio);
    area = pi*pow(raio,2);
    printf("%.2f",area);
    return 0;
}
