#include <stdio.h>

//  出力を生成
void generate(int *input, int *num)
{
    int cnt = *input, result = 0;

    while (cnt > 0)
    {
        result = (result << 1) | (cnt & 1);
        cnt >>= 1;
    }

    *num = result;
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
