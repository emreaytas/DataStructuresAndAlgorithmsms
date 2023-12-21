#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#include<stdbool.h>

// 4 çeşit bağlı liste tipi var. tek yönlü linked list, çift yönlü linked list, tek yönlü dairesel linked list, çift yönlü dairesel linked list.

struct Node
{

int veri; // veri. 
struct Node* pointer; // bir sonraki düğümü göstermek için kullanırız.
};

typedef struct Node AA;



int main(){

   AA* dugum1;
   dugum1 = (AA*)malloc(sizeof(AA)); // düğüm için bellekte alan oluşturduk düğümün pointeri ve kendisi oluştu.


   AA* dugum2;
   dugum2 = (AA*)malloc(sizeof(AA)); // düğüm için bellekte alan oluşturduk düğümün pointeri ve kendisi oluştu.

      AA* dugum3;
   dugum3 = (AA*)malloc(sizeof(AA)); // düğüm için bellekte alan oluşturduk düğümün pointeri ve kendisi oluştu.
      AA* dugum4;
   dugum4 = (AA*)malloc(sizeof(AA)); // düğüm için bellekte alan oluşturduk düğümün pointeri ve kendisi oluştu.   


   dugum1->veri = 11;
   dugum1->pointer =  dugum2;
   dugum2->veri = 12;
   dugum2->pointer = dugum3;
   dugum3->veri = 13;
   dugum3->pointer = dugum4;
   dugum4->veri = 14;
   dugum4->pointer = NULL; // eğer biticekse burada o zaman son pointer NULL göstermelidir.

   



   // pointerin göstereceği düğüm önceden oluşmuş olmalı Node* olarak oluşmalı ki gösterebilinsin.
   // tek yünlüde son düğüm olduğunu bir dğüğümün pointeri NULL'sa buradan anlarız. 
   // 

 


    return 0;

}