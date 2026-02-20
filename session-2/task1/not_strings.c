
#include <stdio.h>

int main( void ) {

    char charArray[5] = {'h','e','l','l','o'};
    char charString[] = "sigurros";
    char gomputer[]="pomputer";
    char bubba[]="vino";
    char tomputer[]="mealdeal";
 
    printf("As array: %s\n",charArray);     // strange behaviour?
    printf("Length of array: %ld\n",sizeof(charArray));   // expected result

    printf("As string: %s\n",charString);   // normal behaviour
    printf("Length of string: %ld\n",sizeof(charString));   // includes silent character \O

    return 0;
}