/*      1      
      2 2
    3 3 3
  4 4 4 4
5 5 5 5 5
*/

#include<stdio.h>

int main(){
    for(int i=1;i<=5;i++){ 
        for(int s=5;s>i;s--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}