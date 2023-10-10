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

// Quick sort için recursive kullanmak şarttır. çünkü nereden bölünme olur bilemeyiz. bundan dolayı baş son belirleriz sadece.
// En hızlı sıralama algoritmasıdır. bir  pivot seçimi yapmamız gerekir sondan veya baştan seçilir. iyi pivot demek daha hızlı işlem demektir.
// i ve j parametleri olur i önce en başın -1'inin alır. j en baştan başlar i ise j - 1 olarak ilerler.  pivot en son eleman olur. j sürekli olarak ilerler eğer pivottan büyük veya eşit değer görürse i++ olur ve j'nin indexindeki değer ile i'nin indexindeki değer yer değiştirir. en son ise i++ olur ve pivot ile yer değişimi olur. sonra pivotun solu ve sağı indexleri recursive olarak gönderilir tekrardan. böylece sıralama olmuş olur.




void quickSort(int* array,int bas,int son){ // ilk elemanı pivot olarak belirler bu pivota göre sıralar pivottan küçükler sola büyükler ise sağa geçecek.  

    if(son > bas){

      int pivot = bas;
      int i = bas;
      int j = son;

      while (i < j)
      {
           
           while(array[i] >= array[pivot] && i < son){
                i++;
           }

           while (array[j] > array[pivot]){
            j--;
           }
           if (i < j)
           {
            swap(&array[i],&array[j]);
           }
           
    
      }

      swap(&array[j],&array[pivot]);

      quickSort(array,bas,j-1);
      quickSort(array,j+1,son);
      

    }


}  
// burada ise durum biraz farklı.  önce en baştaki elemanı pivot olarak seçtik sonra i ilk elemandan j ise son elemandan birbirlerine gelmeye başladılar.  i pivottan küçük j ise büyük eleman bulup duracak yerinde. 
// ilk while içerisinde i pivottan küçük değer bulana kadar ilerler i sondan küçük olacak şekilde.  
// ikinci while içerisinde ise j pivottan büyük eleman arar. ve if içerisindeki koşul sağlanırsa  yani i j ve birbirinin üstesinden gelmemişse değişim sağlanır. pivot ile en son j'nin yeri değişir.
// sonra pivot indexi olan j'dir... sonra recursive olarak j+1 ve j-1 yollanarak kalanlar kendi aralarında sıralattırılır.



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


