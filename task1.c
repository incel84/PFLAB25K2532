#include<stdio.h>

int main(){

int a;
int fact=1;
printf("Enter a number: ");
scanf("%d",&a);

if(a >=0){
for(int i=1;i<=a;i++){
    fact*=i;
}
printf("\nThe factorial is %d",fact);
}
else {
    printf("\nNumber is negative!");
}

    return 0;
}