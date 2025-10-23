#include <stdio.h>
#include "login.h"
int main() {
if (!login()) {
   return 0; 
}
float balance = 150.50;
printf("Your Balance Is %.2f \n",balance);
return 0;
}
