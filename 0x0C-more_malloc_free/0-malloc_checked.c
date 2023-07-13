#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void *malloc_checked(unsigned int b){
	
	if(malloc(b) == '\0')
		exit(98);
        
            
}
