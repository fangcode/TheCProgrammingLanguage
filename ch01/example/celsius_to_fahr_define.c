#include<stdio.h>

/*
当 fahr 等于 0，20，... 300 时，打印华氏温度和摄氏温度的对照表
*/

#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
    int fahr;

    for (fahr=LOWER; fahr<=UPPER; fahr+=STEP)
        printf("%3.0f %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
}
