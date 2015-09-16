#include <stdio.h>
#include <sys/timeb.h> 

int main()     
{ 
    struct timeb start, end;
    int diff;
    ftime(&start);
    
    getchar();

    ftime(&end);
    
    diff = (int) (1000.0 * (end.time - start.time) + (end.millitm - start.millitm));

    printf("\nOperation took %u milliseconds\n", diff);
    return 0;
}
