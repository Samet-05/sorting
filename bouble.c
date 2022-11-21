#include <stdio.h>

// bubble sort
 int main(){
     
     int i,j;
     int arr[20];
     int n;
     int temp;

     printf("girilecek eleman sayisi");
     scanf("%d",&n);

     for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
     }

     for(i=0; i<n; i++){

        for(j=1; j<n-i; j++){

            if(arr[j-1]>arr[j]){
                temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
     }


     for(i=0; i<n; i++){
        printf("%d ",arr[i]);
     }







    return 0;
 }







 /*
 
5 2 4 1
2 5 4 1
2 4 5 1
2 4 1 5
2 1 4 5
1 2 4 5
 
 
 
 */