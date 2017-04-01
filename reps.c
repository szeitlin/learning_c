#include <stdlib.h> //getenv, atoi
#include <stdio.h> //printf

int main(){
    char *repstext=getenv("reps");
    int reps=repstext ? atoi(repstext):10;

    char *msg=getenv("msg");
    if (!msg) msg="Hello";

    for (int i=0; i<reps; i++)
        printf("%s\n", msg);
}