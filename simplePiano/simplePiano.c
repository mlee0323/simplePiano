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
    printf("키별 음계 설명\n");
    printf("a=도 s=레 d=미 f=파 g=솔 h=라 j=시 k=도\n");
    char c;
    while (1)
    {
        c = Inkey();
        switch (c)
        {
        case 'a': Beep(262, 100); printf("도 "); break;
        case 's': Beep(294, 100); printf("레 "); break;
        case 'd': Beep(330, 100); printf("미 "); break;
        case 'f': Beep(349, 100); printf("파 "); break;
        case 'g': Beep(392, 100); printf("솔 "); break;
        case 'h': Beep(440, 100); printf("라 "); break;
        case 'j': Beep(494, 100); printf("시 "); break;
        case 'k': Beep(523, 100); printf("도1 "); break;


        }
    }
}