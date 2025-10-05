#include<stdio.h>

int main(){
int a;
printf("Enter number of rows(odd number): ");
scanf("%d",&a);

if(a%2==0){
    printf("Invalid input!");
    return 0;
}

int centre=a-1;

for(int i=0;i<a;i++){
    for(int j = 0;j<2*a-1;j++){
        if(j >= centre-i && j <= centre+i){
            printf("*");
        }
        else{
            printf(" ");
        }
        
    }
    printf("\n");
    
}

for(int i=a-2;i>=0;i--){
    for(int j = 0;j<2*a-1;j++){
        if(j >= centre-i && j <= centre+i){
            printf("*");
        }
        else{
            printf(" ");
        }
        
    }
    printf("\n");
    
}

return 0;
}