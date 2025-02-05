#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if((ch<='a' && ch>=z))||(ch <='A'&& ch>='Z'){
        if(a == 'a' || a == 'e' || a == 'i' || a == 'o' ||
         a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'){
            printf("Vowel\n");
        }
        else{
            printf("Consonant\n");
        }
    }
    else if (a>='0' &&a<='9'){
        printf("Digit\n");
    }
    else{
        printf("Special Character\n");
    }
    return 0;
}