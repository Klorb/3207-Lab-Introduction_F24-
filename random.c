#include "random.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num = 0;

char randchar()
{
    num = rand() % 28;

    char alphabet[27] = {'A', 'B', 'C', 'D', 'E', 'F',
                            'G', 'H', 'I', 'J', 'K', 'L', 'M',
                            'N', 'O', 'P', 'Q', 'R', 'S', 'T',
                            'U', 'V', 'W', 'X', 'Y', 'Z'};

    

    
    return(alphabet[num]);
}