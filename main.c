#include <stdio.h>

void generate(int *input, int *num)
{
    int cnt = *input, r = 0;

    while (cnt > 0)
    {
        r = (r << 1) | (cnt & 1);
        cnt >>= 1;
    }

    *num = r;
}

int main(void)
{
    int input, num;

    scanf("%d", &input);

    // 境界条件のチェック
    if (input <= 0)
    {
        printf("NG");
        return 0;
    }

    generate(&input, &num);
    printf("%d,%d", input, num);

    return 0;
}
