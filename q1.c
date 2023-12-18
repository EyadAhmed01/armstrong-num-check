#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num,count=0,sum=0,i=0,temp1,temp2;
    printf("enter number");
    scanf("%d",&num);
    temp1=num;
    temp2=num;
    while(temp1!=0){
        temp1=temp1/10;
        count++;
    }
    while(temp2!=0){
        i=temp2%10;
        sum=sum+(int)pow(i,count);
        temp2=temp2/10;
}

if(sum==num)
    printf("it is armstrong number");
else
printf("it is NOT armstrong");







}
