#include <stdio.h>
int main()
{
    char X,Y;
    int a,b;
    scanf("%c %c",&X,&Y);
    a=X;b=Y;
    if(a>b){
        printf(">");}
    else if(b==a){ printf("=");}
    else { printf("<");}
	return 0;
}
