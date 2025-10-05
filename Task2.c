#include<stdio.h>

int main(){
int a,rem,sum=0;
int b=0;

printf("Enter a 5 digits number: ");
scanf("%d",&a);
int copy = a;
int copy2 = a;
int temp = a;
if(a < 10000 || a > 99999){
    printf("invalid input!");
    return 0;
}
while(copy > 0){
    rem = copy%10;
    sum+=rem;
    copy/=10;
}
int count=0;
if(sum%2==0){
    for(int i=1;i<=temp;i++){
        if(temp%i==0){
            count++;
        }
    }
    if(count == 2){
        printf("%d is a prime number.",a);
    }
    else{
        printf("%d is not a prime number",a);
    }
}
else{
    while(copy2 > 0){
        b*=10;
        b+=copy2%10;
        copy2/=10;
    }
    if(b==a){
        printf("%d is palindrome",a);
    }
    else{
        printf("%d is not a palindrome",a);
    }
}



    return 0;
}