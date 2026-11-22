#include <stdio.h>
#include <string.h>
#include <ctype.h>

char * strrev(char *str) {
    if (!str) return NULL;
    int left = 0;
    int right = strlen(str) - 1;
    char temp;
    while (left < right) {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
    return str;
}

char * strlwr(char *str) {
    if (str == NULL) return NULL;
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
    return str;
}

char * strupr(char *str) {
    if (str == NULL) return NULL;
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper((unsigned char)str[i]);
    }
    return str;
}

int main(){
    char str1[50];
    char orig_str1[50];    
    char concat_str[100];  
    char str2[50];
    char str3[50];
    char str4[50];

    printf("Enter value of string 1: ");
    scanf("%49[^\n]", str1);
    strcpy(orig_str1, str1); 

    printf("Enter value of string 2: ");
    scanf(" %49[^\n]", str2);

    printf("\nUsing strlen function: \n");
    printf("Length of string 1 is %ld\n", strlen(str1));
    printf("Length of string 2 is %ld\n", strlen(str2));

    printf("\nUsing strcmp function: \n");
    if ((strcmp(str1, str2)) == 0){
        printf("The strings are equal in length.");
    }
    else if ((strcmp(str1,str2)) > 0){
        printf("String 1 is lexicographically greater than string 2.\n");
    }
    else {
        printf("String 2 is lexicographically greater than string 1.\n");
    }

    printf("\nUsing strrev function: \n");
    printf("When we reverse string 1 we get: %s\n", strrev(str1));

    printf("\nUsing strcat function: \n");
    strcpy(concat_str, orig_str1);
    printf("Concatenating string 1 with string 2 we get: %s.\n", strcat(concat_str, str2));

    printf("\nUsing strcpy function: \n");
    printf("Data of string 1 is %s.\n", orig_str1);
    printf("Data of string 2 before changing is %s.\n", str2);
    strcpy(str2, orig_str1);
    printf("Data of string 2 after changing is %s.\n", str2);

    printf("\nUsing strlwr function: \n");
    printf("Enter anything in UPPERCASE: ");
    scanf(" %49[^\n]", str3);
    printf("String 3 in lowercase is: %s\n", strlwr(str3));

    printf("\nUsing strupr function: \n");
    printf("Enter anything in lowercase: ");
    scanf(" %49[^\n]", str4);
    printf("String 4 in uppercase is: %s\n", strupr(str4));

    return 0;
}
