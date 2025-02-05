#include <stdio.h>
int main() {
    char a;
    scanf("%d",&a);
    if(isalpha(ch)){
        if(a == a||e||i||o||u){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if(isdigit(ch)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}