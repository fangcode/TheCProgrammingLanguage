#include<stdio.h>

/*
当 fahr 等于 0，20，... 300 时，打印华氏温度和摄氏温度的对照表
*/

main()
{
    int fahr;

    for (fahr=0; fahr<=300; fahr+=20)
        printf("%3.0f %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
}
