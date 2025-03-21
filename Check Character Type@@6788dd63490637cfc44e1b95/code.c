
/*#include <stdio.h>
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
*/
#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch== 'i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("Vowel");
    }
        else if((ch>='a' && ch<='z')||(ch>='A'&&ch<='Z')){
            printf("Consonant");
        }
        else if(isdigit(ch)){
            printf("Digit");
        }
            else{
                printf("Special Character");
            }
        return 0;
        }