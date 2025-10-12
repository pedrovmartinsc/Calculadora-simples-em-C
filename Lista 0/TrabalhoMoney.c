#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>    // Adicionado
#include <wctype.h>  



int main(){
    setlocale(LC_ALL,"Portuguese");
        system("chcp 65001");
    float valor, hora, percentual;
    wprintf(L"Digite o valor da hora trabalhada (Salário por hora trabalhada):");
    wscanf(L" %f", &valor);
    wprintf(L"Percentual de descontos:");
    wscanf(L" %f", &percentual);

    wprintf(L"Quantas horas trabalhadas:");
    wscanf(L" %f", &hora);
    wprintf(L"Horas trabalhadas: %f \n", hora);
    wprintf(L"Salário Bruto: %f \n", hora*valor);
    wprintf(L"Desconto: %f \n", percentual/100 );
    wprintf(L"Salário líquido: %f \n",(hora*valor)*(1 -(percentual/100)) );

    system("pause");
    return 0;



}