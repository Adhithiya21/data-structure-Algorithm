#include <stdio.h>
#include <string.h>

   int main() {
    char str[50];
    int vowel_count = 0;
    int digit_count=0;
     int consonat_count=0;
    printf("Enter a string: ");
    scanf("%s", str);

   
    for (int i = 0; str[i] != '\0'; i++) {
        
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') 
            {
            vowel_count++;
        }

        
        else if (str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' ||
            str[i] == '0' || str[i] == '9' || str[i] == '8' || str[i] == '7' || str[i] == '6') 
            {
              digit_count++;
        }
        else{
            consonat_count++;
        }
    }

    printf("Number of vowels: %d\n", vowel_count);
    printf("Number of consonats: %d\n",consonat_count);
    printf("Number of digits: %d\n",digit_count);
    return 0;

   
}
 