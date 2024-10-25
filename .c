#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int k=str[0]-'0';
    int k1=str[2]-'0';
    switch(str[1]){
        case '+':
        printf("%d",k+k1);
        break;
    }
    return 0;
}
