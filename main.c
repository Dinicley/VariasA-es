#include <stdio.h> 
#include <stdlib.h> 
 

#define MAX_NOME 30   // a diretiva define serve para aumentar o n�vel de alterabilidade do programa 
 
int main() { 
      // Declara��o do vetor x com capacidade para 10 inteiros e a sua inicializa��o com 10 valores 
      
	  int x[10] = { 20, 30, 45, 67, 5, 49, 34, 21, 99, 89 }; 
 
      // Declara��o e inicializa��o do vetor y com 3 inteiros 
      int y[] = { 34, 7, 44 }; 
 
      // Declara��o do vetor z para 3 inteiros 
      int z[3]; 
 
      // Inicaliza��o dos tr�s elementos do vetor z 
       z[0] = 200; 
       z[1] = 400; 
       z[2] = 500; 
 
      // Declara��o e inicializa��o do vetor de caracteres s 
      // Vetor de caracteres com termina��o de nulo � chamado de STRING 
      char s[] = {'b','i','a','\0'}; 
 
      // Declara��o do vetor de caracteres t com incializa��o de uma constante 
      // string (caracteres entre aspas duplas) Neste caso o nulo � 
      // colocado automaticamente no final, como 4� caractere
      char t[] = "bia"; 
 
      printf("Primeiro elemento do vetor x: %d \n", x[0]); 
      printf("Segundo elemento do vetor y: %d \n", y[1]); 
      printf("Terceiro elemento do vetor s: %c \n", s[2]); 
 
      printf("Todos os 10 elementos do vetor x: \n"); 
      int i; 
      for(i=0; i < 10; i++) 
            printf("%d ", x[i]); 
 
      // A exibi��o de uma string pode ser feita com o formatador %s       
      printf("\nTodos os elementos do vetor s: %s \n", s); 
      printf("Todos os elementos do vetor t: %s \n", t); 
 
      // Entrada via teclado para uma string sem espa�os em branco
      // Observe que a fun��o scanf fica sem o operador &
      char apelido[MAX_NOME]; 
      printf("Digite um nome (sem espacos): "); 
      scanf("%s", apelido); 
      printf("Nome digitado: %s \n", apelido); 
 
      // Entrada via teclado para uma string com espa�os em branco  
      // Neste caso usamos a fun��o fflush(stdin) para esvaziar o buffer
      // de entrada (ap�s uma scanf, o buffer fica sujo com um salto de linha)
      // A fun��o gets l� todos caracteres at� encontrar um salto de linha.
      char nomeCompleto[MAX_NOME]; 
      printf("Digite um nome (pode conter espacos): "); 
      fflush(stdin); gets(nomeCompleto); 
      printf("Nome digitado: %s", nomeCompleto); 
 
      printf("\n\n\n"); 
	  
	  system("pause"); 
	  return 0;
}
