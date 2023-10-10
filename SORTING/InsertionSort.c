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


void insertionSort(int* array,int a){ // ilk sayıdan değil ikinci sayıdan başlar. sürekli olarak sağdan sola giderek kendinden küçük olanın sağında geçer sayılar.
     
    for(int i = 1; i < a ;i++){

        for(int j = i; j > 0;j--){
             
             if(array[j] < array[j - 1]){
                
                  int temp = array[j];
                  array[j] = array[j - 1];
                  array[j-1] = temp;

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



