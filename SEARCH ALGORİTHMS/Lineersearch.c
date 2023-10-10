#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#include<stdbool.h>

// lineersearch en baştan itibaren arar ve aranan sayıyı bulur yoksa -1 veya False gibi bir yapı döner.   


int SearchingValue(){
    int value = 0;
    printf("Plase enter searching value: ");
    scanf("%d",&value);


    return value;

}


int LinearSearch(int value,int* array,int len){

    for(int i = 0;i < len;i++){
        if (value == array[i]){
           return i;
        }
    }

    return -1;

}

int main(){
    
    int n;printf("Kac elemanli bir dizi kuracaksiniz: ");scanf("%d",&n);
    int degerler[n];
    for (int i = 0; i < n;i++){
        printf("Dizinin %d. degerini giriniz: ",i+1);
        scanf("%d",degerler + i); 
    }
      



    int deger = SearchingValue();

    int FF = LinearSearch(deger,degerler,n);
    if (FF == -1)
    {
        printf("Searched value not found");
    }else{
       printf("Searched value found in %d. row",FF+1);        
    }
     

  return 0;
}



