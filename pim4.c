/*Programa ingressos_BNS.c

Descrição: Este é um sistema pela BNS Desenvolvimento de Sistemas para venda de ingressos de teatro desenvolvidos na linguagem C tal como definida no padrão ISO89/90.

A escolha de ISO C 89/90 se justifica pela necessidade de garantir plena portabilidade do sistema entre máquinas rodando sistema operacional MS-Windows (que só é compatível com ISO C89/90) e máquinas operando outros sistemas operacionais.  Assim, este código foi compilado com sucesso em uma máquina 
LUBUNTU Linux 64b (usando a suíte de compilação gcc) e em uma máquina MS-Windows 10 64 (usando o 
compilador mingw-w64 ).

O sistema fica no ar até ser desligado por meio da digitação do código secreto de desligamento no lugar do nome do usuário.  O código de desligamento é:

dEsLiGa20SiStEmA18

O estilo do código segue basicamente a variante  K&R Stroustrup tal como descrita em 
<https://en.wikipedia.org/wiki/Indentation_style#Variant:_Stroustrup>:

Autores: Elisabete Teresinha Rodrigues da Silva dos Santos e Nelson Seixas dos Santos.

Data: 30/10/2018.

Versão: 0.0.1.
*/

#include <stdio.h>


void main ()
{ 
	
	int idadeCliente;
	char diaSemana;
	float desconto = 0;
	char professorRedePublicaEnsino = "N"
	
	while(True){
		printf("\nCompra aqui seu ingresso\n\n");
		printf("Qual a sua idade?\n\n");
		scanf("%d\n\n",&idadeCliente);
		printf("Você é professor da rede pública de ensino? Responda S (para SIM) ou N (para não).\n\n");
		scanf("%c",&professorRedePublicaEnsino);
		if(professorRedePublicaEnsino != "S" || professorRedePublicaEnsino != "N"){
			printf("Use letras maiúsculas!!!");
		
		
		
		}
		if (idadeCliente <= 12 || idadeCliente >= 60){
			printf("Digite a primeira letra do dia da semana.\n\n");
			scanf("%c", &diaSemana);
			if(diaSemana == "t"){
				desconto = 1;
			}
			else{
				desconto = 
			
			
			
			
			}
			
		
		
		
		}
		
	}
	
}

/*
O padrão ISO C11 estabelece a forma abaixo para declarar variáveis.

*/
static char *
concat (char *s1, char *s2 )
{


}

/* Quando os argumentos de uma função não couberem em uma única linha, o padrão abaixo deve ser seguido. 
o padrão abaixo
*/

int
lots_of_args (int an_integer, long a_long, short a_short,
                            double a_double, float a_float )
                            
/* struct e enum types iniciam na coluna 1 a menos que caibam em uma linha */

struct foo
{
    int a, b;
}

/* Ou ainda: */

struct foo {int a, b;}




