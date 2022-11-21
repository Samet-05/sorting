#include <stdio.h>

//counting sort
void sort(int array[], int x,int y){
 int a[y];
 int i;
 int j;
 int toplam=0;
 


  printf("siralama: ");
  for(i=0; i<=y; i++){
    for(j=0; j<x; j++){
     if(array[j]==i){
      toplam++;

     }
     
    }
    printf("%d ",toplam);
  }



    
}




 int main(){

     int n;
     int i;
     scanf("%d",&n);
     int arr[n];
     int y=0;
     for(i=0; i<n; i++){
     scanf("%d",&arr[i]);
      if(arr[i]>y)
        y=arr[i];
     }
     
     sort(arr,n,y);


    return 0;
 }




 /*
 
  2 5 7 2

    0 1 2 3 4 5 6 7
    0 0 2 2 2 3 3 4
    
 


 0-1-2-3-4-5-6-7-8-9
     1     1   1
     1 
 
 
 */