# include<stdio.h>

int main()
{
    const int AMOUNT = 100;
    int price = 0;
    printf("请输入金额（元）：");
    scanf("%d",&price);
    printf("找您%d元。\n",AMOUNT-price);

}