
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>    // Adicionado
#include <wctype.h>   

int main(){
        setlocale(LC_ALL,"Portuguese");
            system("chcp 65001");
    float dist, comb, rest;
    wprintf(L"Digite o valor da distância percorrida:");
    wscanf(L" %f", &dist);


    wprintf(L"Digite o valor do combústivel gasto:");
    wscanf(L" %f", &comb);
    wprintf(L"O valor do consumo médio(consumo por distância percorrida) é %.2f \n", comb/dist);
    system("pause");
    return 0;
}