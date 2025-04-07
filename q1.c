/*
Implemente um programa que tenha como entrada um n ́umero (1-7) que corresponde a um dos dias
da semana e imprima na tela o nome do dia correspondente (domingo, segunda, ter ̧ca, quarta, quinta,
sexta, s ́abado). Se o n ́umero lido n ̃ao estiver no intervalo 1-7, imprima: “N ́umero de dia n ̃ao v ́alido”. O
programa deve permanecer executando at ́e que o usu ́ario tecle o numero 0. (Utilize obrigatoriamente
teste no in ́ıcio).
*/

#include <stdio.h>

int main(){
    
int dia;

do{
    printf("Digite um dia da semana(1 p domingo.. 7 sabado e 0 pra terminar):\n");
    scanf("%d", &dia);

    if (dia == 0) {
        break;  // Se o usuário digitar 0, o programa termina
    }
    
switch(dia){

    case 1:
    printf("Domingo\n");
    break;
    case 2:
    printf("Segunda\n");
    break;
    case 3:
    printf("Terça\n");
    break;
    case 4:
    printf("Quarta\n");
    break;
    case 5:
    printf("Quinta\n");
    break;
    case 6:
    printf("Sexta\n");
    break;
    case 7:
    printf("Sábado\n");
    break;
    default:
    printf("Número inválido\n");
}

}while(dia != 0);

    return 0;
}
