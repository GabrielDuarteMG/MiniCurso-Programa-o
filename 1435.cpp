#include<stdio.h>
#include <algorithm>
using namespace std;
  /*
  Primeiro dia de programação - 10/03/2018
  */
int main()
   {
    int n, x, a,z = 0;
    while (n != 0) {
      printf("Digite um numero: ");
      scanf("%i", & n);
      for (a = 0; a != n; a++) {
        for (x = 0; x != n; x++) {
        int valor = min(a,x);
        int valor2 = min(n-a-1,n-x-1);
        if(x == 0)
            printf("%d", min(valor,valor2) + 1);

        else
            printf(" %d", min(valor,valor2) + 1);
      }
    printf("\n");
    }
  }
    return 0;
}
