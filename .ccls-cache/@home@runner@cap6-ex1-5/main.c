#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define ex5

#ifdef ex1

main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
    int cont;

  // entrada      
  int a, b;

  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // alimentação
    printf("\nDigite o 1° número: ");
    scanf("%d", &a);
    printf("\nDigite o 2° número: ");
    scanf("%d", &b);

    // função

    // saída
    printf("\n A + B = %d", a + b);
    printf("\n A - B = %d", a - b);
    printf("\n A * B = %d", a * b);
    printf("\n A / B = %d", a / b);

    // perguntar se o usuário quer finalizar  
    printf("\n \n deseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    // evitar bugs de Enter
    getchar();
    if (cont == 1)
      break;

  } while (1 == 1);
}
#endif

#ifdef ex2

main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
    int cont;

  // entrada      
  int a, b, c, d, e, f;

  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // alimentação
    printf("\nDigite o 1° número: ");
    scanf("%d", &a);
    printf("\nDigite o 2° número: ");
    scanf("%d", &b);

    // função

    // saída
    printf("\n A + B = %d", a += b);
    printf("\n A - B = %d", a -= b);
    printf("\n A * B = %d", a *= b);
    printf("\n A / B = %d", a /= b);

    // perguntar se o usuário quer finalizar  
    printf("\n \n deseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    // evitar bugs de Enter
    getchar();
    if (cont == 1)
      break;

  } while (1 == 1);
}
#endif

#ifdef ex3

// dia mes
int validaDiames(int d, int m) {
  int dia = d;
  if (m == 2 || m == 4 || m == 6 || m == 9 || m == 11 && d > 30) {
    printf("\nDigite o dia novamente: ");
    scanf("%d", &dia);

  } else {
    if (d > 31)
      printf("\nDigite o dia novamente: ");
    scanf("%d", &dia);
  }

  return dia;
}
// ano bissextos
int validaDiabi(int d, int m, int a) {
  int dia = d;
  if (d == 29 && m == 2) {
    if (a % 4 == 0)
      printf("\nDia bissexto");

    else {
      printf("\nNão é dia bissexto \nDigite o dia novamente: ");
      scanf("%d", d);
    }
  }
  return dia;
}

int main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
    int cont;
  int dianasc, mesnasc, anonasc, diaatual, mesatual, anoatual, dia, mes, ano,
      mes229;

  // entrada      

  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // alimentação
    printf("Digite o Dia do seu nascimento: ");
    scanf("%d", &dianasc);
    printf("Digite o Mês do seu nascimento: ");
    scanf("%d", &mesnasc);
    printf("Digite o Ano do seu nascimento: ");
    scanf("%d", &anonasc);
    // ano bissextos
    dianasc = validaDiabi(dianasc, mesnasc, anonasc);

    printf("Digite o Dia de hoje: ");
    scanf("%d", &diaatual);
    printf("Digite o Mês de hoje: ");
    scanf("%d", &mesatual);
    printf("Digite o Ano de hoje: ");
    scanf("%d", &anoatual);
    // ano bissextos
    diaatual = validaDiabi(diaatual, mesatual, anoatual);

    // função

    dia = diaatual - dianasc;
    mes = mesatual - mesnasc;
    ano = anoatual - anonasc;

    // calculos com erros

    // dia
    if (dia < 0) {
      dia = 30 + dia;
      mes--;

      // mes
      if (mes < 0) {
        mes = 12 + mes;
        ano--;
      }
    }

    // saída
    printf("\nVocê Possui \n %d anos, %d meses e %d dias", ano, mes, dia);
    // perguntar se o usuário quer finalizar  
    printf("\n \n deseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    // evitar bugs de Enter
    getchar();
    if (cont == 1)
      break;

  } while (1 == 1);
}
#endif

#ifdef ex5

// dia mes
int validaDiames(int d, int m) {
  int dia = d;

  switch (m) {
  // mes selecionado
  case 1: {
    // valida dia
    while (dia > 31) {
      printf("\nDigite o dia novamente: ");
      scanf("%d", &dia);
    }

    break;
  }
  case 2: {

    break;
  }
  case 3: {
    // valida dia
    while (dia > 31) {
      printf("\nDigite o dia novamente: ");
      scanf("%d", &dia);
    }
    break;
  }
  case 4: {
    // valida dia
    while (dia > 30) {
      printf("\nDigite o dia novamente: ");
      scanf("%d", &dia);
    }
    break;
  }
  case 5: {
    // valida dia
    while (dia > 31) {
      printf("\nDigite o dia novamente: ");
      scanf("%d", &dia);
    }
    break;
  }
  case 6: {
    // valida dia
    while (dia > 30) {
      printf("\nDigite o dia novamente: ");
      scanf("%d", &dia);
    }
    break;
  }
  case 7: {

    // valida dia
    while (dia > 31) {
      printf("\nDigite o dia novamente: ");
      scanf("%d", &dia);
    }
    break;
  }
  case 8: {
    // valida dia
    while (dia > 31) {
      printf("\nDigite o dia novamente: ");
      scanf("%d", &dia);
    }
    break;
  }
  case 9: {
    // valida dia
    while (dia > 30) {
      printf("\nDigite o dia novamente: ");
      scanf("%d", &dia);
    }
    break;
  }
  case 10: {
    // valida dia
    while (dia > 31) {
      printf("\nDigite o dia novamente: ");
      scanf("%d", &dia);
    }
    break;
  }
  case 11: {
    // valida dia
    while (dia > 30) {
      printf("\nDigite o dia novamente: ");
      scanf("%d", &dia);
    }
    break;
  }
  case 12: {
    // valida dia
    while (dia > 31) {
      printf("\nDigite o dia novamente: ");
      scanf("%d", &dia);
    }
    break;
  }
  }

  return dia;
}
// ano bissextos
int validaDiabi(int d, int m, int a) {
  int dia = d;

  if (a % 4 == 0) {
    while (dia > 29 && m ==2) {

      printf("\nNão é data válido \nDigite o dia novamente: ");
      scanf("%d", &dia);
    }

  } else {
    while (dia > 28 && m == 2) {
      printf("\nNão é data válido \nDigite o dia novamente: ");
      scanf("%d", &dia);
    }
  }

  return dia;
}

// direcionar dia da semana pelo ano
int calculoano(int ano) {
  int rest = ano % 28;
  int direcao;
 // direcao pelo resto d 28 para fazer direcão da semana
   
  if( rest == 1 || rest == 7 || rest == 18 || rest == 24){
   //começa num domingo
   direcao = 0;
 }
else{
  if( rest == 2 || rest == 8 || rest == 13 || rest == 19){
   //começa numa segunda
   direcao = 1;
 }
else{if( rest == 3 || rest == 14 || rest == 20 || rest == 25){
    //começa numa terça
   direcao = 2;
 }
else{
  if( rest == 4 || rest == 9 || rest == 15 || rest == 26){
   //começa numa quarta
   direcao = 3;
 }
else{
  if( rest == 10 || rest == 16 || rest == 21 || rest == 27){
   //começa numa quinta
   direcao = 4;
 }else{
  if( rest == 0 || rest == 5 || rest == 11 || rest == 22){
   //começa numa sexta
   direcao = 5;
 }else{
    if( rest == 6 || rest == 12 || rest == 17 || rest == 23){
   //começa numa sexta
   direcao = 6;
   }
 }

}

}
}
  
}
}

  
  return direcao;
}
// direcionar dia da semana pelo mes
int calculomes(int m) {
  int direcao = 0;

  switch (m) {
  // mes selecionado
  case 1: {
    // deixa na direção pois começa no domingo
    direcao += 0;

    break;
  }
  case 2: {
    // soma 3 na direção pois começa na quarta
    direcao += 3;

    break;
  }
  case 3: {
    // soma 3 na direção pois começa na quarta
    direcao += 3;

    break;
  }
  case 4: {
    // soma 6 na direção pois começa no sabado
    direcao += 6;

    break;
  }
  case 5: {

    direcao += 1;

    break;
  }
  case 6: {

    direcao += 4;

    break;
  }
  case 7: {

    direcao += 6;

    break;
  }
  case 8: {

    direcao += 2;

    break;
  }
  case 9: {

    direcao += 5;

    break;
  }
  case 10: {

    direcao += 0;

    break;
  }
  case 11: {

    direcao += 3;

    break;
  }
  case 12: {

    direcao += 5;

    break;
  }
  }

  return direcao;
}
// resposta final
void calcsemana(int direcao) {

  switch (direcao) {
  case 1: {
    // resto = 1 é domingo
    printf(" é Domingo");

    break;
  }
  case 2: {
    // resto = 2 é segunda
    printf("é Segunda-Feira");

    break;
  }
  case 3: {
    // resto = 3 é terca
    printf("é Terça-Feira");

    break;
  }
  case 4: {
    // resto = 4 é quarta
    printf("é Quarta-Feira");

    break;
  }
  case 5: {
    // resto = 5 é quinta
    printf("é Quinta-Feira");

    break;
  }
  case 6: {
    // resto = 6 é sexta
    printf("é Sexta-Feira");

    break;
  }
  case 0: {
    // resto = 0 é sábado
    printf("é Sábado");

    break;
  }

    // fim switch
  }

  // fim void
}

int main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
    int cont;

  // entrada      
  int dia, mes, ano;
  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // alimentação
    printf("Digite o Dia : ");
    scanf("%d", &dia);
    printf("Digite o Mês : ");
    scanf("%d", &mes);
    printf("Digite o Ano : ");
    scanf("%d", &ano);
    // ano bissextos
    dia = validaDiabi(dia, mes, ano);
    dia = validaDiames(dia, mes);
    // função
    int direcao_dia= dia % 7;
    int direcao_ano = calculoano(ano) % 7 ;
    int direcao_mes = calculomes(mes)%7;
    int direcaofinal  = ( direcao_dia + direcao_mes + direcao_ano) %7;
    

    // saída
printf("\n O dia %.2d/%.2d/%d ", dia,mes,ano);
calcsemana(direcaofinal);

    // perguntar se o usuário quer finalizar  
    printf("\n \n deseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    // evitar bugs de Enter
    getchar();
    if (cont == 1)
      break;

  } while (1 == 1);
}

#endif