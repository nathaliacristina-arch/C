#include <stdio.h>
#include <stdlib.h>

char f[20000],palavra1[10000], palavra2[10000];
int i, j, l, palindromo = 0;

int main(void){
   printf("Informe uma palavra ou uma frase: ");
   gets(f);


   for (i = 0, l = 0; i < strlen(f); i++, l++) {
       if (f[i] == ' ')
          i++;
       palavra1[l] = f[i];
   }

   j = strlen(palavra1) - 1;

   for (i = 0;i < strlen(palavra1);i++){
       palavra2[j] = palavra1[i];
       j--;
   }

   for (i = 0, j = 0;i < strlen(f); i++,j++){
       if (palavra1[i] == palavra2[j])
          palindromo++;
   }
   if (palindromo == strlen(f))
      printf("\n Sim, e um Palindromo\n\n");
   else
       printf("\n Nao e um Palindromo\n\n");
return 0;
}
