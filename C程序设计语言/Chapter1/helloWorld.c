#include <stdio.h> // 告诉编译器本程序中包含标准输入.输出库的信息
main()  // 程序的起点, 每个程序必须包含一个main函数
        // 圆括号中为空该函数表示传递空值
{   // 函数中的语句用一对大括号括起来
    printf("hello, world\n"); // printf函数是用于打印输出的函数值
    // printf函数不会自动换行
    // 双引号表示字符串.字符串常量
    // \n 表示换行符, C语言中还有很多转义字符
    // \n换行 \t制表符 \b回退符 \"双引号 \\反斜杠本身
}
