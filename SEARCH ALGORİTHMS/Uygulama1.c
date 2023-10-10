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


void viewArray(int* array,int len){
  
    for (int i = 0; i < len; i++){
        printf("%d ",array[i]);
    }

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

int BinarySearch(int value,int* array,int len){

    int bas = 0,son = len - 1;
    while (son >= bas)
    {
        int orta = array[(bas + son)  / 2];
        if(value == orta){
            return (bas + son) / 2;
        }else if (value < orta)
        {
        son = ((bas + son) / 2) - 1;  
        }else{
        bas = ((bas + son) / 2) + 1;
        }
                
    }
    
    return -1;

}


void quickSort(int* array,int bas,int son){ // ilk elemanı pivot olarak belirler bu pivota göre sıralar pivottan küçükler sola büyükler ise sağa geçecek.  

    if(son > bas){
        int pi = partition(array,bas,son);
        quickSort(array,bas,pi - 1);
        quickSort(array,pi+1,son); 

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

    printf("Aranan sayiyi giriniz: ");int sayi;scanf("%d",&sayi);fflush(stdin);
    int deger = BinarySearch(sayi,degerler,n);
    if(deger == -1){
        printf("Aranan sayi yok...");
    }else{
printf("Aranan sayi var...");
    }

  return 0;
}


