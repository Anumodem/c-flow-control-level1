#include <stdio.h>
int main()
{
    char ch;
       scanf("%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
   { printf("ALPHABET");
   }
    else 
 { printf("NOT AN ALPHABET");
 } 
return 0;
}
