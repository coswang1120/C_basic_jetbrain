// main.c

#include <stdio.h>

// �D��ơA�{�����J�f�I
int main()
{
    // �ŧi�ê�l���ܼ� a�A��Ȭ� 100
    int a = 100;

    // �P�_�ܼ� a �O�_�p�� 20
    if(a < 20)
    {
        // �p�G a �p�� 20�A�h��X "a < 20"
        printf("a < 20\n");
    }
    else
    {
        // �p�G a ���p�� 20�A�h��X "a �j�� 20" �⦸
        printf("a �j�� 20\n");
        printf("a �j�� 20\n");
    }

    // ��X�ܼ� a ����
    printf("a ���� %d\n", a);

    // �{�������A��^ 0
    return 0;
}