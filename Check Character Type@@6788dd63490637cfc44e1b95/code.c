#include <stdio.h>
int main()
{
    
    char a;
    scanf("%c",&a);
    if ((a >='a' && a<='z') || (a>='A' && a<='Z')){
    (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A'|| a=='E' || a=='I' || a=='O' || a=='U'){
        printf("Vowel");
    } else 
        printf("Consonant");
    }
    else if ( a>='0' && a<='9')
    printf("Digit");
    else
    printf(" special Character");
    return 0;
}