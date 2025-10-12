#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>    // Adicionado
#include <wctype.h>   

int main(){
    setlocale(LC_ALL,"Portuguese");
        system("chcp 65001");


    float num1, num2, soma, sub, mult, div;
    int opcao;
    wprintf(L"Digite o primeiro número:");
    wscanf(L"%f", &num1);
    wprintf(L"Digite o segundo número:");
    wscanf(L"%f", &num2);
    wprintf(L"\t Digite 1 para soma \n \t Digite 2 para subtração \n \t Digite 3 para multiplicação \n \t Digite 4 para divisão \n");
    scanf("%d", &opcao);
    if(opcao == 1){
        soma = num1 + num2;
        wprintf(L"%f + %f = %f", num1, num2, soma);
    }
    else if (opcao == 2)
    {
        sub = num1 - num2;
        wprintf(L"%f - %f = %f", num1, num2, sub);
    }
    
    else if (opcao == 3)
    {
        mult = num1*num2;
        wprintf(L"%f*%f = %f", num1, num2, mult);
    }
    
    else if (opcao == 4)
    {
        div = num1/num2;
        wprintf(L"%f/%f = %f", num1, num2, div);
    }else{
        wprintf(L"Bem, tu não digitou nenhum dos números, daí deu ruim o código, vai se fuder >:( ");
    };
    

    system("pause");

    return 0;
    

    
};