#include<stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int randomNum = rand();
    int a,b;
   int lenth = sizeof(randomNum);
   a=1 * pow(10, lenth);
   int result = 0;
        for (int i = 0; i < lenth+1; i++) {
            result = result * 10 + 9;
        }
        b=result;
    int i,number=randomNum;
     printf("Enter a number %d to %d : ",a,b);

    while(i<1){
         int x;
        scanf("%d",&x);
        if(x<number){
             printf("Your Number is small. Try Again : ");
             i=0;
        }else if(x>number){
            printf("Your Number is Big. Try Again : ");
            i=0;
        }else{
            printf("\n\n\n\n\n\t\t\t\t\t-----> Congratulation You Win <-----\n\n\n\n\n\t\t\t\t\t");
            i=2;
        }
    }
}
