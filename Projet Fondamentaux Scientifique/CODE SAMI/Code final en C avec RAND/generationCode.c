#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "GenerationCode.h"

FILE* fichier = NULL ;

void chenillard()
{


fichier = fopen("C:/Users/arnau/Desktop/Arduino C/2coeur.c/param.h","w+");

if(fichier != NULL)
{
fprintf(fichier,"void fonction(){ \n digitalWrite(6, HIGH); \n delay(40);"
      "  \n digitalWrite(7, HIGH); \n delay(40); "
      "\n digitalWrite(8, HIGH); \n delay(40); "
      "\n digitalWrite(9, HIGH); \n delay(40); "
      "\n digitalWrite(10, HIGH); \n delay(40); "
      "\n digitalWrite(11, HIGH);  \n delay(40); "
      "\n delay(40); \n digitalWrite(2,HIGH); "
      "\n delay(40); \n digitalWrite(3, HIGH);"
      " \n delay(40); \n digitalWrite(4, HIGH);"
      " \n delay(40); \n digitalWrite(5,HIGH); "
      "\n delay(40); \n delay(1000); \n digitalWrite(6, LOW); "
      "\n  delay(40); \n digitalWrite(7,LOW); \n  delay(40); "
      "\n digitalWrite(8, LOW); \n delay(40); \n digitalWrite(9, LOW);"
      " \n delay(40); \n digitalWrite(10, LOW); \n delay(40);"
      "\n digitalWrite(11, LOW); \n delay(40); \n delay(40); "
      "\n digitalWrite(2,LOW); \n delay(40); \n digitalWrite(3, LOW); "
      "\n delay(40); \n digitalWrite(4, LOW); \n  delay(40);"
      " \n digitalWrite(5,LOW); \n  delay(40); \n }");

fclose(fichier);
}
}

void uneledsurdeux ()
{
fichier = fopen("C:/Users/arnau/Desktop/Arduino C/2coeur.c/param.h","w+");
if(fichier != NULL)
{
fprintf(fichier,"void fonction(){ \n delay(600); \n  digitalWrite(2,HIGH);"
      " \n  digitalWrite(3,LOW); \n  digitalWrite(4,HIGH); "
      "\n  digitalWrite(5,LOW); \n  digitalWrite(6,HIGH); "
      "\n  digitalWrite(7,LOW); \n  digitalWrite(8,HIGH); "
      "\n  digitalWrite(9,LOW); \n  digitalWrite(10,HIGH);"
      " \n  digitalWrite(11,LOW); \n  delay(300);"
      " \n  digitalWrite(2,LOW); \n  digitalWrite(3,LOW);"
      " \n  digitalWrite(4,LOW); \n digitalWrite(5,LOW);"
      "\n  digitalWrite(6,LOW); \n  digitalWrite(7,LOW);"
      "\n  digitalWrite(8,LOW); \n  digitalWrite(9,LOW);"
      " \n  digitalWrite(10,LOW); \n  digitalWrite(11,LOW); "
      "\n  delay(600); \n  digitalWrite(2,LOW); "
      "\n  digitalWrite(3,HIGH); \n  digitalWrite(4,LOW); "
      "\n  digitalWrite(5,HIGH); \n  digitalWrite(6,LOW);"
      " \n  digitalWrite(7,HIGH); \n  digitalWrite(8,LOW); "
      "\n  digitalWrite(9,HIGH); \n  digitalWrite(10,LOW);"
      " \n  digitalWrite(11,HIGH); \n  delay(600);"
      " \n  digitalWrite(2,LOW); \n  digitalWrite(3,LOW);"
      " \n  digitalWrite(4,LOW); \n  digitalWrite(5,LOW);"
      "\n  digitalWrite(6,LOW); \n  digitalWrite(7,LOW);"
      "\n  digitalWrite(8,LOW); \n  digitalWrite(9,LOW); "
      "\n  digitalWrite(10,LOW); \n digitalWrite(11,LOW);}");
fclose(fichier);
}
}

void allumagecomplet()
{
fichier = fopen("C:/Users/arnau/Desktop/Arduino C/2coeur.c/param.h","w+");
if(fichier != NULL)
{
fprintf(fichier,"void fonction(){ \n delay (400); \n   digitalWrite(6, HIGH);"
      "\n digitalWrite(7, HIGH); \n  digitalWrite(8, HIGH); "
      "\n  digitalWrite(9, HIGH); \n digitalWrite(10, HIGH); "
      "\n  digitalWrite(11, HIGH);  \n  digitalWrite(2,HIGH); "
      "\n digitalWrite(3, HIGH); \n digitalWrite(4, HIGH); "
      " \n digitalWrite(5,HIGH); \n  delay (400); "
      "\n digitalWrite(6, LOW);  \n digitalWrite(7, LOW); "
      "\n digitalWrite(8, LOW); \n  digitalWrite(9, LOW);"
      "\n digitalWrite(10, LOW);  \n  digitalWrite(11, LOW);"
      " \n  digitalWrite(2,LOW); \n digitalWrite(3, LOW); "
      "\n digitalWrite(4, LOW); \n digitalWrite(5,LOW); "
      "\n delay (400);   \n digitalWrite(6, HIGH);"
      "\n digitalWrite(7, HIGH); \n digitalWrite(8, HIGH); "
      "\n digitalWrite(9, HIGH); \n digitalWrite(10, HIGH); "
      " \n digitalWrite(11, HIGH); \n  digitalWrite(2,HIGH);"
      " \n digitalWrite(3, HIGH); \n digitalWrite(4, HIGH); "
      "\n digitalWrite(5,HIGH); \n }");
fclose(fichier);
}
}

void unesurtrois()
{
fichier = fopen("C:/Users/arnau/Desktop/Arduino C/2coeur.c/param.h","w+");
if(fichier != NULL)
{
fprintf(fichier,"void fonction(){ \n \n delay(600); \n"
       "digitalWrite(2,HIGH); \n digitalWrite(3,LOW);"
       "\n digitalWrite(4,LOW); \n digitalWrite(5,HIGH);"
       " \n digitalWrite(6,LOW); \n digitalWrite(7,LOW); "
       "\n digitalWrite(8,HIGH); \n digitalWrite(9,LOW);  "
       "\n digitalWrite(10,LOW); \n digitalWrite(11,HIGH); "
       "\n delay(300); \n digitalWrite(2,LOW); \n digitalWrite(3,LOW);"
       " \n digitalWrite(4,LOW); \n digitalWrite(5,LOW); \n digitalWrite(6,LOW);"
       " \n digitalWrite(7,LOW); \n digitalWrite(8,LOW); \n digitalWrite(9,LOW); "
       " \n digitalWrite(10,LOW); \n digitalWrite(11,LOW); \n delay(600); "
       "\n digitalWrite(2,LOW); \n digitalWrite(3,LOW); \n digitalWrite(4,HIGH); "
       "\n digitalWrite(5,LOW); \n digitalWrite(6,LOW); \n digitalWrite(7,HIGH);  "
       "\n digitalWrite(8,LOW); \n digitalWrite(9,LOW); \n digitalWrite(10,HIGH); "
       "\n digitalWrite(11,HIGH); \n delay(600); \n digitalWrite(2,LOW); \n digitalWrite(3,LOW);"
       "\n digitalWrite(4,LOW); \n digitalWrite(5,LOW); \n digitalWrite(6,LOW); "
       "\n digitalWrite(7,LOW); \n digitalWrite(8,LOW); \n digitalWrite(9,LOW); "
       "\n digitalWrite(10,LOW); \n digitalWrite(11,LOW); \n }");
fclose(fichier);
}
}

void ledauchoix(int LED)
{
fichier = fopen("C:/Users/arnau/Desktop/Arduino C/2coeur.c/param.h","w+");
if(fichier != NULL)
{

fprintf(fichier,"void fonction(){ \n \n int LED = %d; \n digitalWrite(LED,HIGH);"
      "\n delay(400); \n digitalWrite(LED,LOW); delay(400);  "
      "\n digitalWrite(LED,HIGH);} \n ", LED);
fclose(fichier);
}
}

void uneparune ()
{
fichier = fopen("C:/Users/arnau/Desktop/Arduino C/2coeur.c/param.h","w+");
if(fichier != NULL)
{
    fprintf(fichier,"void fonction() { \n int a =  random(500,2000); \n delay(a); \n digitalWrite(2,HIGH);\n "
            "delay(40);\n  digitalWrite(2,LOW);\n  digitalWrite(3, HIGH);\n "
            " delay(40);\n   digitalWrite(3,LOW);\n  digitalWrite(4, HIGH);\n"
            "  delay(40);\n  digitalWrite(4,LOW);\n  digitalWrite(5,HIGH);\n  "
            "delay(40);\n  digitalWrite(5,LOW);\n digitalWrite(6, HIGH);\n "
            " delay(40);\n  digitalWrite(6,LOW);\n  digitalWrite(7, HIGH);\n  "
            "delay(40);\n  digitalWrite(7,LOW);\n  digitalWrite(8, HIGH);\n "
            " delay(40);\n  digitalWrite(8,LOW);\n  digitalWrite(9, HIGH);\n "
            " delay(40);\n  digitalWrite(9,LOW);\n  digitalWrite(10, HIGH);\n"
            "delay(40);\n  digitalWrite(10,LOW);\n  digitalWrite(11, HIGH); \n  delay(40);\n "
            "  digitalWrite(11, LOW);\n}");
            fclose(fichier);
}
}
