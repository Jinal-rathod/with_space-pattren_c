/*      1
      1 -
    1 - 1
  1 - 1 -
1 - 1 - 1
*/

#include<stdio.h>

int main(){
    for(int i=1;i<=5;i++){ 
        for(int s=5;s>i;s--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            if(j%2==0){
                printf("-");
            }else{
                printf("1");
            }
        }
        printf("\n");
    }
}