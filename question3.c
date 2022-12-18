#include <stdio.h>
#include <math.h>
int main()
{
    int note500,note100,note50,note20,note10,note5,note2,note1;
    int note11,note12,note13,note14,note15,note16,note17;
    int amount;
    scanf("%d",&amount);
    if(amount<=32000){
        note500=amount/500;
        note11=amount%500;
        note100=note11/100;
        note12=note11%100;
        note50=note12/50;
        note13=note12%50;
        note20=note13/20;
        note14=note13%20;
        note10=note14/10;
        note15=note14%10;
        note5=note15/5;
        note16=note15%5;
        note2=note16/2;
        note17=note16%2;
        note1=note17/1;
        printf("500:%d\n100:%d\n50:%d\n20:%d\n",note500,note100,note50,note20);
        printf("10:%d\n5:%d\n2:%d\n1:%d\n",note10,note5,note2,note1);
    }
    else{
    printf("error");
    }
    return 0;
}
