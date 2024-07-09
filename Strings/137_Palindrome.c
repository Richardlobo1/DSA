#include <stdio.h>
#include<string.h>
int main()
{
    int i = 0, j = 0;
    char a[] = "noon";
    for (i = 0; a[i] != 0; i++)
    {
    }
    i=i-1;
    printf("%d\n", i);
     for (j = 0; j < i; j++, i--)
     {
         if (a[j] != a[i]){
         
         
         printf("%s is not a palindrome\n",a);
          return 0;}
        
     }
      printf("%s is a palindrome\n", a);
     
    // while (i > j) {
    //     if (a[j++] != a[i--]) {
    //         printf("%s is not a palindrome\n", a);
    //         return 0;
    //         // will return from here
    //     }
    // }
  
    // printf("%s is a palindrome\n", a);
  
    return 0;
}