#include <stdio.h>

int main()
{
    char text[60];

    int c_vowel=0,c_consonant=0;
    scanf("%s",text);

    for(int i=0; text[i] != '\0'; i++)
    {
        if(text[i] == 'A' || text[i] == 'a' || text[i] == 'E' || text[i] == 'e' || text[i] == 'I' ||
        text[i] == 'i' || text[i] == 'O' || text[i] == 'o' || text[i] == 'U' || text[i] =='u' )
        {
            c_vowel++;
        }
        else
        {
            c_consonant++;
        }
    }

 printf("Number of vowels are: %d\n",c_vowel);
 printf("Number of consonants are: %d\n",c_consonant);

}
