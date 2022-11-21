#include <stdio.h>



//quick sort

 void sort(int x, int y, int array[]){

int temp;
int pivot=y;
int i;
int j;

i=x-1;

for(j = x; j < y; j++){

if(array[j]<array[pivot]){
  i++;
  temp=array[j];
  array[j]=array[i];
  array[i]=temp;
}

if(j==pivot-1){
  i++;
  temp=array[i];
  array[i]=array[pivot];
  array[pivot]=temp;
  
  sort(x,i-1,array);
  sort(i+1,y,array);
 
}
}
// printf("%d",array[i]);
// printf("\n%d",array[j]);
// printf("\n%d",array[y]);
}


int main(){
    
  int n;
  int i,j;
  scanf("%d",&n);
  int arr[n];
  for(i=0; i<n; i++){
    scanf("%d",&arr[i]);
  }

  sort(0,n-1,arr);

  printf("\n\nsiralama: ");

 for(i=0; i<n; i++){
   printf("%d ",arr[i]);
  }
}





/*
        []   
  1 1 2 4 9 6 
  []      []                []  []
  1 1 0 1 2 2 4 4 5 2 3 2 7 6 9 9
                      i j                              
 */