#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]){

int nota, media, porcentagem, soma;
int na, nb;
soma=0;
na=0;
nb=0;
printf("Digite uma nota\n");
scanf("%d", nota);
while(nota>=0) {
printf("Digite uma nota\n");
    if(nota>=0)
        soma+=nota;
    else
        soma=soma;

    if(nota<5 && nota>=0)
        nb++;

    else if(nota>=5)
        na++;
scanf("%d", nota);
}
media=(soma)/(na+nb);
porcentagem=(nb/(na+nb))*100;
printf("O numero de alunos coom nota baixa eh: %d", nb);
printf("O numero de alunos coom nota alta eh: %d", na);
printf("A media das notas eh: %d", media);
printf("A porcentagem de alunos com nota maior que a média eh: %d", porcentagem);
return 0;}














