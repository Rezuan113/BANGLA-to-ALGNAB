#include <stdio.h>
int main()
{
    char str[6],new_str[6];
    int i,j;
    scanf("%s",str);
    for(i=5;i>=0;i--){
            new_str[j]=str[i];
        printf("%c",new_str[j]);
    }
return 0;
}
