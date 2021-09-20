#include <stdio.h>

float calc();
int menu();
int textCentering();
int choice;



int main(void) {
  printf("WITAJ W PROGRAMIE WIELOFUNKCYJNYM NAPISANYM W C\n");
  menu();

  
  return 0;
}

float calc(){
  float a, b, result;
  char action;
  printf("podaj pierwsza liczbe : \n");
  scanf("%f", &a);
  printf("podaj druga liczbe do dzialania : \n");
  scanf("%f", &b);
  printf("teraz podaj znak dzialania, \ndo wyboru: + - * / :\n");
  scanf("%s", &action);

  switch(action){
    case('+'): printf("wynik dodawania : %f\n", a+b); break;
    case('-'): printf("wynik odejmowania : %f\n", a-b); break;
    case('*'): printf("wynik mnozenia : %f\n", a*b); break;
    case('/'): printf("wynik dzielenia : %f\n", a/b); break;
    default:printf("podales zly znak dzialania\nuruchom program jeszcze raz\n");
    
  }
  return menu();
}

int menu(){
  printf("MENU:\n1: KALKULATOR\n2: NARZEDZIE DO WYSRODKOWANIA TEKSTU\n0: KONIEC I WYJSCIE Z PROGRAMU\n");
  scanf("%d", &choice);
  switch(choice){
    case(0): printf("WYBRANO ZAKONCZENIE PROGRAMU\nDZIEKUJE\nMARTIN");break;
    case(1): printf("WYBRANO KALKULATOR\nPOSTEPUJ ZGODNIE Z INSTRUKCJAMI\n"); calc(); break;
    case(2): printf("WYBRANO NARZEDZIE DO WYSRODKKOWANIA TEXTU W OKIENKU\n"); textCentering();break;
  }
  return 0;
}

int textCentering(){
  //na razie dobrze centruje tylko 1 wyraz 
  //każda spacja robi błąd
  typedef char* String;
  int width;
  int size = 0;
  printf("PODAJ SZEROKOSC OKIENKA DO WYSWIETLANIA TEXTU : \n");
  scanf("%d", &width);
  char message [width];
  printf("PODAJ TEXT DO WYŚRODKOWANIA : \n");
  scanf("%s", message);
  printf("WPISANO TEXT : %s\n", message);
  char* poi = message;
  while(*poi){
    size++;
    poi++;
  }
  for(int i = 0;i<((width-size)/2);i++) printf(" ");
  printf("%s", message);
  printf("\n\n");
  
  return menu();
}