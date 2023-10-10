#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#include<stdbool.h>

void swap(int* x,int* y){
   int temp;
   temp = *x;
   *x = *y;
   *y = temp;

}


void bubbleSort(int* array,int a){ // önce en baştan başlar yan yana olanları kıyaslar ve büyük olanı bir sağa atar. sürekli olarak en sona en büyüğü ata ata ilerler sistem. 
     
    for(int i = 0; i < a - 1;i++){


        for(int j = 0; j < a - 1 - i;j++){ // her seferinde en sona en büyük yerleştiği için bir daha o alanlara ulaşmak gereksizdir gereksiz kıyaslama olur.
           
           if(array[j] > array[j + 1]){

              swap(array[j],array[j+1]);

           }


        }


    }


}


int main(){
    
    int n;printf("Kac elemanli bir dizi kuracaksiniz: ");scanf("%d",&n);
    int degerler[n];
    for (int i = 0; i < n;i++){
        printf("Dizinin %d. degerini giriniz: ",i+1);
        scanf("%d",degerler + i); 
    }
      

    bubbleSort(degerler,n);
    viewArray(degerler,n);
     
  return 0;
}


void viewArray(int* array,int len){
  
    for (int i = 0; i < len; i++){
        printf("%d ",array[i]);
    }

}



