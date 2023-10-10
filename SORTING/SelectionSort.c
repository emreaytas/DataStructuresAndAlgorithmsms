#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#include<stdbool.h>





void selectionSort(int* array,int a){ // her seferinde en küçüğü bul en başa yaz mantığı vardır.
     
    for(int i = 0; i < a - 1;i++){

        int minindex = i;

        for(int j = i + 1; j < a ;j++){ // i + 1 dememiz daha mantıklıdır bunun nedeni zaten en küçük sürekli olarak i ile aynı sıraya yerleşecek.
           
           if(array[minindex] > array[j]){

              minindex = j;

           }


        }

        int temp = array[i];
        array[i] = array[minindex];
        array[minindex] = temp;

    }


}

void viewArray(int* array,int len){
  
    for (int i = 0; i < len; i++){
        printf("%d ",array[i]);
    }

}



int main(){
    
    int n;printf("Kac elemanli bir dizi kuracaksiniz: ");scanf("%d",&n);
    int degerler[n];
    for (int i = 0; i < n;i++){
        printf("Dizinin %d. degerini giriniz: ",i+1);
        scanf("%d",degerler + i); 
    }
      

    selectionSort(degerler,n);
    viewArray(degerler,n);
     
  return 0;
}




