# include<stdio.h>

/* 将摄氏温度转换为华氏温度 */
int main()
{
    float celsius, fahr;
    int lower, upper, step;
    lower = -100;
    upper = 200;
    step = 20;
    celsius = lower;

    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32;
        printf("%3.0f %6.0f\n", celsius, fahr);
        celsius = celsius + step;   
    }
}
