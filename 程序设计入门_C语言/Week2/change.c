#include <stdio.h>
int main() {
    int price = 0;
    printf("请输入金额: ");
    scanf("%d", &price);

    int change = 100 - price;
    printf("找零%d元\n", change);
}

// C99 可以在任意位置定义变量
// ANSI C 要求程序开头声明所有变量
