#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    int letter, num, blank, rests;
    letter = 0;
    num = 0;
    blank = 0;
    rests = 0;
    gets(str);
    for(int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] <= 'Z' && str[i] >= 'A')
        {
            letter += 1;
        }
        else if(str[i] <= '9' && str[i] >= '0')
        {
            num += 1;
        }
        else if(str[i] == ' ')
        {
            blank += 1;
        }
        else
        {
            rests += 1;
        }
    }
    printf("%d %d %d %d", letter, num, blank, rests);
    return 0;
}