#include <termios.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
//selection sort
 int main()
{
int n;
int i,j;
int arr[20];
int temp;
int y;


printf("girilecek eleman sayisi:");
scanf("%d",&n);


for(i=0; i<n; i++){
    scanf("%d",&arr[i]);
}



for(i=0; i<n; i++){
    y=i;

    for(j=1+i; j<n; j++){
        if(arr[j]<arr[y]){
            temp=arr[y];
            arr[y]=arr[j];
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

2 5 7 1

*/