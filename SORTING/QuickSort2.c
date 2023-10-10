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

int partition(int* array,int bas,int son){
      
      int pivot = array[son], i = bas - 1,j;

      for(j = bas; j  < son;j++){
             
             if(array[j] <= pivot){
                i++;
                swap(&array[i],&array[j]);
             }

      }

swap(&array[i+1],&array[son]);
return (i + 1);

}


void quickSort(int* array,int bas,int son){ // ilk elemanı pivot olarak belirler bu pivota göre sıralar pivottan küçükler sola büyükler ise sağa geçecek.  

    if(son > bas){
        int pi = partition(array,bas,son);
        quickSort(array,bas,pi - 1);
        quickSort(array,pi+1,son); 

    }

}  



void viewArray(int* array,int len){
  
    for (int i = 0; i < len; i++){
        printf("%d ",array[i]);
    }

}

int main(){
    
    int n;
    printf("Kac elemanli bir dizi kuracaksiniz: ");
    scanf("%d",&n);
    int degerler[n];
    for (int i = 0; i < n;i++){
        printf("Dizinin %d. degerini giriniz: ",i+1);
        scanf("%d",degerler + i); 
    }
      

    quickSort(degerler,0,n-1);
    viewArray(degerler,n);
     
  return 0;
}


