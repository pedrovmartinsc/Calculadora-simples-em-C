
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>    // Adicionado
#include <wctype.h>   
#include <math.h> 

float calculard(float a,float b,float c,float d){
    float dista;
    float diff_x;
    float diff_y;
    diff_x = a-b;
    diff_y = c-d;

    dista = sqrt(pow(diff_x, 2) + pow(diff_y, 2));
    return dista;
}

int main(){
        setlocale(LC_ALL,"Portuguese");
            system("chcp 65001");
    float x1, x2, y1, y2, dist;
    wprintf(L"Digite o valor de x1:");
    wscanf(L" %f", &x1);
    wprintf(L"Digite o valor de x2:");
    wscanf(L" %f", &x2);
    wprintf(L"Digite o valor de y1:");
    wscanf(L" %f", &y1);
    wprintf(L"Digite o valor de y2:");
    wscanf(L" %f", &y2);

    dist = calculard( x1, x2, y1, y2);

    wprintf(L"A distância entre o ponto (x1, y1) e (x2, y2) é %.3f", dist);
    system("pause");
    return 0;
}