#include <stdio.h>
#include "login.h"
#include <string.h>
int login() {
char username[50];
char password[50];
printf("Enter Your Username\n");
scanf("%s",username);
printf("Enter Password\n");
scanf("%s",password);
if (strcmp(username,"admin") == 0  && strcmp(password,"admin123") == 0) {
 printf("Welcome Admin\n");
 return 1;
}
else{
    printf("Access Denied");
    return 0;
}
}
