#include <stdio.h>
#include <sys/timeb.h>
#include <math.h>
    
double f (double n, double c) {
    return pow(n, c);
}

void func_t (int a, double b, double c, double n) {

    int cont;
    double f_n;
    struct timeb start, end;
    int diff;

    if (n<=1) {
        return;
    }

    for (cont = 0; cont<a; cont++) {
        func_t(a, b, c, n/b); 
    }
    printf("passou\n");
    ftime(&start);
    
    f_n = f(n, c);
    printf("%f\n", f_n);
    for (cont = 0; cont <= f_n;) {
        cont++;
    }
    
    ftime(&end);
    diff = (int) (1000.0 * (end.time - start.time) + (end.millitm - start.millitm));
    
    /*Calcula_nivel_atual_arvore();*/
    
    printf("%u\n", diff);
}


int main () {
  
    func_t(4, 2, 3, 5000);

    return 0;
}
