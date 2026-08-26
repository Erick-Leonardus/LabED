#include <stdio.h>
#include <math.h>

 float lad, are, per;
 void calcula_hexagono(float l, float *area, float *perimetro);
int main() {
    scanf("%f", &lad);
    calcula_hexagono(lad, &are, &per);

    printf("\nÁrea: %f; Perímetro: %f", are, per);
    return 0;
}

void calcula_hexagono(float l, float *area, float *perimetro) {
    area = &are;
    *area = (3 * pow(l,2) * sqrt(3))/2;

    perimetro = &per;
    *perimetro = l * 6;

};