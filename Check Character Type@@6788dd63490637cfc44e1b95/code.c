#include <stdio.h>
int main() {
    char a;
    scanf("%c",a);
    if((a >='a' && a<='z')||(a>='A'&& a<='Z')){
        if((a == 'A')||(a == 'E')||(a == 'I')||(a == 'O')||(a == 'U')
        ||(a == 'a')||(a == 'e')||(a == 'i')||(a == 'o')||(a == 'u')){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if(a>='1'&& a<='10'){
        printf("Digit");
    }   
    else{
        printf("Special Character");
          }
    
    return 0;
}