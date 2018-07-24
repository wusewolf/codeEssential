#include <stdio.h>

int main()
{
    float n = 0;
    if ( n < 0 )
    {
        printf("<0\n");
    }

    const float NORM = 0.00001;
    float flag = 0.0;
    if((flag>=-NORM) && (flag<=NORM))   //float变量与零值的比较表达式！！
    {
        printf("flag equal zero.\n", flag);
    }
    else
    {
        printf("flag not equal zero.\n");
    }

    return 0;
}
