#include <stdio.h>
int main(void)
{
printf("The number 555 in various forms:\n");
printf("Without any modifier: \n"); 
printf("[%d]\n",555); 
printf("With – modifier :\n");
printf("[%-d]\n",555);
printf("With digit string 10 as modifier :\n"); 
printf("[%10d]\n",555);
printf("With 0 as modifier : \n"); 
printf("[%0d]\n",555);
printf("With 0 and digit string 10 as modifiers :\n"); 
printf("[%010d]\n",555);
printf("With -,0 and digit string 10 as modifiers:\n"); 
printf("[%-010d]\n",555);
printf("In float form without modifiers:\n"); 
printf("[%f]\n", 555.55);
printf("In exponential form without any modifier:\n");
printf("[%e]\n", 555.55);
printf("In float form with - modifier:\n"); 
printf("[%-f]\n", 555.55);
printf("In float form with digit string 10.3 as modifier\n"); 
printf("[%10.3f]\n", 555.55);
printf("In float form with 0 and digit string 10.3 as modifiers:\n"); 
printf("[%010.3f]\n", 555.55);
printf("In exponential form with 0and digit string 10.3 as modifiers:\n");
printf("[%010.3e]\n", 555.55);
printf("A string in various forms:\n");
printf("Without any format command:\n");
printf("Good day Mr. Lee. \n");
printf("With format command but without any modifier:\n");
printf("[%s]\n", "Good day Mr. Lee.");
printf("With digit string 4 as modifier:\n");
printf("[%4s]\n", "Good day Mr. Lee.");
printf("With digit string 23 as modifier: \n");
printf("[%23s]\n", "Good day Mr. Lee.");
printf("With digit string 25.4 as modifier: \n");
printf("[%25.4s]\n", "Good day Mr.Lee.");
printf("With – and digit string 25.4 as modifiers:\n");
printf("[%-25.4s]\n", "Good day Mr.shroff.");
}