#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#include<stdbool.h>


// Birleştirme sıralamasıdır. Divide and conqueror böl ve feth et. birleştirerek sıralama yapacağız. 
// avantajı nedir l.logn < n ** 2 dir.  daha hızlı bir algoritmadır.
// lineer değildir. bundan dolayı n * log(n)  işlem yapar. 
// en küçük parçalara ayırır. sonra birleştirirken sıralama yaparız.

// mesela 38 27 43 3 9 82 10 5 olsun.   ikiye böleriz  38 27 43 3 - 9 82 10 5 olacak şekilde
  // sonra 38 27 - 43 3   -- 9 82 - 10 5  olacak şekilde bölünür.
  // sonra 38 - 27 -- 43 - 3 --- 9 - 92 -- 10 - 5 olacak şekilde en küçük parçalara denk getiririz.

  // sonra 38 27'ye bakar   27-38 yapar   3-43  9-82  5-10 
  // 27 3 karşılaştırılır. 3 27 sonra 38 43 karşılaştırılır  3 27 38 43 olur..    sonra 5 9 10 82    her ikili  dizinin önce ilk elemanlarını sonra diğer elemanlarını karşılaştırır. 
  // en son ise iki tane 4 eelemanlı dizi olur sıralanmış sürekli olarak sonra itibaren aynı indextekilerı karşılaştırır küçük olan sola büyük olan bir sağıda geçer sonra diğer indexe geçilir.  dizilerin aynı indexteki elemanları sürekli olarka karşılaştırılır.




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

void birlestir(int bas,int orta,int son,int* array,int len){
    int i,j,k;
    int b[len];


    for(i =  bas;i <= son;i++){
        b[i] = array[i];

    }
    i = bas;
    j = orta + 1;
    k = bas;
    while(i <= orta && j <= son){

        if(b[i] <= b[j]){
            array[k++] = b[i++];
        }else{
            array[k++] = b[j++];
        }

    }
    
    while(i < orta ){
     
     array[k++] = b[i++];

    }
    
}

void bol(int bas,int son,int* array,int len){ // recursive olarak kullanırız bu sistemi.

    if(bas <son){

        int orta = (bas + son ) / 2;
        bol(bas,orta,array,len);
        bol(orta + 1,son,array,len);
        birlestir(bas,orta,son,array,len);
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

    bol(0,n-1,degerler,n);  
    
    viewArray(degerler,n);
     
  return 0;
}


