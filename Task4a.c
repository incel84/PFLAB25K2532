#include<stdio.h>
#include<string.h>

int main(){
    char name[100];
    char pass[100];
    char ch;
    int counter=0;

    printf("Enter a Username(five alphabets): ");

    
    while(counter < 100){
        ch = getchar();
        if(ch == '\n'){
            break;
        }
        else{
            name[counter] = ch;
            counter++;
        }
    }
    name[counter] = '\0';

    if(counter != 5){
        printf("Invalid username!");
        return 0;
    }

    
    counter = 0;
    printf("Enter a Password(6 characters with digit, uppercase, lowercase): ");

    
    while(counter < 100){
        ch = getchar();
        if(ch == '\n'){
            break;
        }
        else{
            pass[counter] = ch;
            counter++;
        }
    }
    pass[counter] = '\0';

    
    if(counter != 6){
        printf("Invalid password! Must be 6 characters.");
        return 0;
    }

    int hasUpper = 0, hasLower = 0, hasDigit = 0;
    for(int i = 0; i < counter; i++){
        if(pass[i] >= 'A' && pass[i] <= 'Z'){
            hasUpper = 1;
        }
        else if(pass[i] >= 'a' && pass[i] <= 'z'){
            hasLower = 1;
        }
        else if(pass[i] >= '0' && pass[i] <= '9'){
            hasDigit = 1;
        }
        else{
            continue; 
        }
    }

    if(!(hasUpper && hasLower && hasDigit)){
        printf("Invalid password! Must contain uppercase, lowercase, and digit.");
        return 0;
    }

    printf("Account Created Successfully!\n");

    
    char loginName[100], loginPass[100];
    counter = 0;

    printf("\n--- Login ---\n");
    printf("Enter Username: ");
    while(counter < 100){
        ch = getchar();
        if(ch == '\n'){
            break;
        }
        else{
            loginName[counter] = ch;
            counter++;
        }
    }
    loginName[counter] = '\0';

    counter = 0;
    printf("Enter Password: ");
    while(counter < 100){
        ch = getchar();
        if(ch == '\n'){
            break;
        }
        else{
            loginPass[counter] = ch;
            counter++;
        }
    }
    loginPass[counter] = '\0';

   
    if(strcmp(name, loginName) == 0 && strcmp(pass, loginPass) == 0){
        printf("Welcome %s, you are now logged in.\n", name);
    }
    else{
        printf("Login failed! Invalid username or password.\n");
    }

    return 0;
}
