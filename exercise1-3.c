# include<stdio.h>

/* 当fahr等于0、20、……300时，分别打印华氏
   温度与摄氏温度对照表 */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* 温度下限 */
    upper = 300;    /* 温度上限 */
    step = 20;      /* 步长 */

    fahr = lower;
    printf("fahr to celsius\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

    

