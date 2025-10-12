#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>    // Adicionado
#include <wctype.h>   

int main(){
        setlocale(LC_ALL,"Portuguese");
            system("chcp 65001");
    float c, f, rest;
    wprintf(L"Digite o valor da temperatura em Celsius:");
    wscanf(L" %f", &c);


    f = (9*c + 160)/5;

    wprintf(L"%f°C em graus Fahrenheit é %f°F", c,f);
    system("pause");
    return 0;
}