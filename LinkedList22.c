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

AA* bas = NULL;
AA* gecici = NULL;

void sonaelemanekle(int sayi){

   AA* dugum;
   dugum = (AA*)malloc(sizeof(AA));
   dugum->veri = sayi;
   dugum->pointer = NULL; // son veri olacağı için NULL gösterecek.
   
   if(bas ==  NULL){
     bas = dugum;

   }else{

    gecici = bas;
    while (gecici->pointer != NULL)
    {

    gecici = gecici->pointer;


    }


    


   }







}


int main(){




   // pointerin göstereceği düğüm önceden oluşmuş olmalı Node* olarak oluşmalı ki gösterebilinsin.
   // tek yünlüde son düğüm olduğunu bir dğüğümün pointeri NULL'sa buradan anlarız. 
   // 

 


    return 0;

}