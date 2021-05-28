#include <stdlib.h>
#include <stdio.h>


int main() {
    char *s = getenv("HOSTNAME");

    if (s == NULL) 
	    printf("There is nothing in here really\n");
    return 0;
}
