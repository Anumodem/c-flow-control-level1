#include <stdio.h>
int main()
{
    int bro1,bro2,bro3,tallest;
    scanf("%d%d%d%d",&bro1,&bro2,&bro3,&tallest);
    if(bro1>=bro3)
     {printf("%d",bro1);
      }
    else if (bro2>=bro3)
    {printf("%d",bro2);
    }
    else
    { printf("%d",bro3);
     }
	return 0;
}
