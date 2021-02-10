#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "Hello, World";
    char rev[100] = "";
    int begin, end, count;
    printf("%s\n",str);
    

    count = 0;
    while (str[count] != '\0')
        count++;
    end = count-1;
    

    for(begin = 0; begin < count; begin++) {
        rev[begin] = str[end];
        end--;
        printf("%s\n",rev);
    }
    rev[begin] = '\0';
    printf("%s\n",rev);
}






