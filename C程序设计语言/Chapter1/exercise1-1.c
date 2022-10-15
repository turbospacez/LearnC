#include<stdio.h>
main() {
    printf("hello, world\n");
}

// 1.双引号不在同一行, 无法通过编译 error: missing terminating " character
// 2.双引号在同一行, 圆括号不在同一行, 编译通过并输出内容
// 3.语句结尾没有双引号, 无法通过编译 error: expected ';' before '}' token
// 4.删除main()的圆括号, 无法通过编译 error: expected '=', ',', ';', 'asm' or '__attribute__' before '{' token
//     估计是没有程序入口, 后面的内容全部不识别
// 5.删除结尾大括号, 无法通过编译 error: expected declaration or statement at end of input
// 6.删除include<stdio.h> 无法调用标准库, 但是仍可以编译和运行, 但是有3处 warning
// 7.删除#include中stdio.h, 无法通过编译 error: empty filename in #include
