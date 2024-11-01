// main.c

#include <stdio.h>

// 主函數，程式的入口點
int main()
{
    // 宣告並初始化變數 a，賦值為 100
    int a = 100;

    // 判斷變數 a 是否小於 20
    if(a < 20)
    {
        // 如果 a 小於 20，則輸出 "a < 20"
        printf("a < 20\n");
    }
    else
    {
        // 如果 a 不小於 20，則輸出 "a 大於 20" 兩次
        printf("a 大於 20\n");
        printf("a 大於 20\n");
    }

    // 輸出變數 a 的值
    printf("a 等於 %d\n", a);

    // 程式結束，返回 0
    return 0;
}