#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#include<stdbool.h>

// Binary search olması için dizinin sıralı olması gerekir.    diziyi sürekli olarak ikiye böler ve bakar sayı küçük mü büyük mü ona göre hangi  bölünene gideceğini belirler.
// sürekli olarak ortanca değere bakar ve one göre sağa mı gidecek sola mı gidecek buna karar verir.

int SearchingValue(){
    int value = 0;
    printf("Plase enter searching value: ");
    scanf("%d",&value);


    return value;

}

void sirala(int* array,int a){
     
    for(int i = 0; i < a - 1;i++){


        for(int j = 0; j < a - 1 - i;j++){
           
           if(array[j] > array[j + 1]){
            int gecici = array[j + 1];
            array[j+1] = array[j];
            array[j] = gecici;

           }


        }

    }

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

int main(){
    
    int n;printf("Kac elemanli bir dizi kuracaksiniz: ");scanf("%d",&n);
    int degerler[n];
    for (int i = 0; i < n;i++){
        printf("Dizinin %d. degerini giriniz: ",i+1);
        scanf("%d",degerler + i); 
    }
      



    int deger = SearchingValue();
    sirala(degerler,n);
    int FF = BinarySearch(deger,degerler,n);
    if (FF == -1)
    {
        printf("Searched value not found");
    }else{
       printf("Searched value found in %d. row",FF+1);        
    }
     

  return 0;
}



