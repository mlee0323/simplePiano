#include <stdio.h>
#include <Windows.h>




int Inkey(void)
{
    int c;
    if (_kbhit() != 0) c = _getch();
    else c = 0;
    return(c);
}

int main(void)

{
    printf("Ű�� ���� ����\n");
    printf("a=�� s=�� d=�� f=�� g=�� h=�� j=�� k=��\n");
    char c;
    while (1)
    {
        c = Inkey();
        switch (c)
        {
        case 'a': Beep(262, 100); printf("�� "); break;
        case 's': Beep(294, 100); printf("�� "); break;
        case 'd': Beep(330, 100); printf("�� "); break;
        case 'f': Beep(349, 100); printf("�� "); break;
        case 'g': Beep(392, 100); printf("�� "); break;
        case 'h': Beep(440, 100); printf("�� "); break;
        case 'j': Beep(494, 100); printf("�� "); break;
        case 'k': Beep(523, 100); printf("��1 "); break;


        }
    }
}