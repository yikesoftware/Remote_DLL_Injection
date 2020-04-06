
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>

void Fun(void)
{
    for (size_t i = 0; i < 3; i++)
        printf("%s addr:0x%p\r\n", __FUNCTION__, Fun);
}

int main(int argc, char* argv[])
{
    Fun();
    //MessageBox(NULL, TEXT("执行完成!"), TEXT("提示"), MB_OK);
    getchar();
    return 0;
}

