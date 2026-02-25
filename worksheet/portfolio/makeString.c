
/*
Name: alex xinyi chen
Student ID: 202028305
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char buffer[45]=""; //each cmd line args at most 9 strings, each string at most 4 chars, hyphen between words so at most 8 hyphens + 1 for \0 resulting in 45 chars

    // process the command-line data using appropriate string functions
    for(int i=1; i<argc; ++i){
        strcat(buffer, argv[i]);
        
        if(i<argc-1){
            strcat(buffer, "-");
        }
    }

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}