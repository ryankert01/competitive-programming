#include <stdio.h>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	char c[100000];
	int i, s;


	while(gets(c)){
		for(i=0; i<strlen(c); i++){
			switch(c[i]){
  /* Capital */
				case 'B': printf("c"); break;
				case 'C': printf("z"); break;
				case 'D': printf("a"); break;
				case 'E': printf("q"); break;
				case 'F': printf("s"); break;
				case 'G': printf("d"); break;
				case 'H': printf("f"); break;
				case 'I': printf("y"); break;
				case 'J': printf("g"); break;
				case 'K': printf("h"); break;
				case 'L': printf("j"); break;
				case 'M': printf("b"); break;
				case 'N': printf("v"); break;
				case 'O': printf("u"); break;
				case 'P': printf("i"); break;
				case 'R': printf("w"); break;
				case 'T': printf("e"); break;
				case 'U': printf("t"); break;
				case 'V': printf("x"); break;
				case 'Y': printf("r"); break;
				
				case '/': printf(","); break;
				case ',': printf("n"); break;
				case 39 : printf("l"); break;
				case ';': printf("k"); break;
				case ']': printf("p"); break;
				case '[': printf("o"); break;
				case ' ': printf(" "); break;
				case '.': printf("m"); break;
/* Small */
				case 'b': printf("c"); break;
				case 'c': printf("z"); break;
				case 'd': printf("a"); break;
				case 'e': printf("q"); break;
				case 'f': printf("s"); break;
				case 'g': printf("d"); break;
				case 'h': printf("f"); break;
				case 'i': printf("y"); break;
				case 'j': printf("g"); break;
				case 'k': printf("h"); break;
				case 'l': printf("j"); break;
				case 'm': printf("b"); break;
				case 'n': printf("v"); break;
				case 'o': printf("u"); break;
				case 'p': printf("i"); break;
				case 'r': printf("w"); break;
				case 't': printf("e"); break;
				case 'u': printf("t"); break;
				case 'v': printf("x"); break;
				case 'y': printf("r"); break;


				case '\\': printf("["); break;
				case '=': printf("0"); break;
				case '-': printf("9"); break;
				case '0': printf("8"); break;
				case '9': printf("7"); break;
				case '8': printf("6"); break;
				case '7': printf("5"); break;
				case '6': printf("4"); break;
				case '5': printf("3"); break;
				case '4': printf("2"); break;
				case '3': printf("1"); break;
				case '2': printf("`"); break;
			
			}
		} printf("\n");
	}
	return 0;
}