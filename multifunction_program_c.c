#include <stdio.h>

float calc();
int menu();
int choice;

int main(void) {
  
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
    case('+'): printf("wynik dodawania : %f", a+b); break;
    case('-'): printf("wynik odejmowania : %f", a-b); break;
    case('*'): printf("wynik mnozenia : %f", a*b); break;
    case('/'): printf("wynik dzielenia : %f", a/b); break;
    default:printf("podales zly znak dzialania\nuruchom program jeszcze raz");
    
  }
  return 0;
}

int menu(){
  printf("witaj w programie wielofunkcyjnym napisanym w C\nMENU:\n1: KALKULATOR\n0: KONIEC I WYJSCIE Z PROGRAMU\n");
  scanf("%d", &choice);
  switch(choice){
    case(0): printf("WYBRANO ZAKONCZENIE PROGRAMU\nDZIEKUJE\nMARTIN");break;
    case(1): printf("WYBRANO KALKULATOR\nPOSTEPUJ ZGODNIE Z INSTRUKCJAMI\n"); calc(); break;
  }
  return 0;
}