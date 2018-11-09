/*Programa ingressos_BNS.c

Descrição: Este é um sistema pela BN Systems para venda de ingressos de teatro desenvolvidos na linguagem C tal como definida no padrão ISO89/90.

A escolha de ISO C 89/90 se justifica pela necessidade de garantir plena portabilidade do sistema entre máquinas rodando sistema operacional MS-Windows (que só é compatível com ISO C89/90) e máquinas operando outros sistemas operacionais.  Assim, este código foi compilado com sucesso em uma máquina LUBUNTU Linux 64b (usando a suíte de compilação gcc) e em uma máquina MS-Windows 10 64 (usando o compilador mingw-w64 ).

O sistema fica no ar até ser desligado por meio da digitação do código secreto de desligamento no lugar do nome do usuário.  O código de desligamento é:

dEsLiGa20SiStEmA18

O estilo do código segue basicamente a variante  K&R Stroustrup tal como descrita em 
<https://en.wikipedia.org/wiki/Indentation_style#Variant:_Stroustrup>:

Autores: Elisabete Teresinha Rodrigues da Silva dos Santos e Nelson Seixas dos Santos.

Data: 30/10/2018.

Versão: 0.0.1.
*/

#include <stdio.h>

void validaIdade(int idadeCliente)
{
	while(idadeCliente != (int)idadeCliente){	
			prinf("\n\nVocê não digitou uma idade válida!  Tente de novo.");
			printf("\n\nQual a sua idade em anos?\n\n");
			scanf("%d",&idadeCliente);
	}


}

void main ()
{ 
	
	int idadeCliente;
	float renda; desconto = 0;
	char diaSemana, professorRedePublicaEnsino = "N", estudante ="N"; desligaSistema[] = "N";
	char estudanteRedePublicaEnsino;

	while(desligaSistema == "N"){
		printf("\nCompre aqui seu ingresso\n\n");
		
		/* Entrada e validação dos dados */
		
		do{
			printf("Qual a sua idade em anos?\n\n");
			scanf("%d",&idadeCliente);
			
			if (idadeCliente != (int)idadeCliente || idadeCliente > 150) {
				prinf("\n\nVocê não digitou uma idade válida!  Tente de novo.");
			}
			
		}while(idadeCliente != (int)idadeCliente || idadeCliente > 150);
		
		do{
			printf("\n\nVocê é professor da rede pública de ensino? 
			Para SIM, tecle S (MAIÚSCULO); para NÃO, digite N (MAIÚSCULO).");
			scanf("%c",&professorRedePublicaEnsino);
			
			if (professorRedePublicaEnsino != "S" || "N") {
				prinf("\n\nVocê não digitou uma resposta válida!  Tente de novo.");
			}

		}while(professorRedePublicaEnsino != "S" || "N");
		
		do{
			printf("\n\nVocê é estudante? 
			Para SIM, tecle S (MAIÚSCULO); para NÃO, digite N (MAIÚSCULO).");
			scanf("%c",&estudante);
			
			if (estudante != "S" || "N") {
				prinf("\n\nVocê não digitou uma resposta válida!  Tente de novo.");
			}

		}while(estudante != "S" || "N");

		do{
			printf("\n\nVocê é estudante? 
			Para SIM, tecle S (MAIÚSCULO); para NÃO, digite N (MAIÚSCULO).");
			scanf("%c",&estudante);
			
			if (estudante != "S" || "N") {
				prinf("\n\nVocê não digitou uma resposta válida!  Tente de novo.");
			}
		
		}while(estudante != "S" || "N");

		
		if (estudante == "S") {
			do{
			printf("\n\nVocê estuda na rede pública de ensino? 
			Para SIM, tecle S (MAIÚSCULO); para NÃO, digite N (MAIÚSCULO).");
			scanf("%c",&estudanteRedePublicaEnsino);
			
			if (estudanteRedePublicaEnsino != "S" || "N") {
				prinf("\n\nVocê não digitou uma resposta válida!  Tente de novo.");
			}
		
		}while(estudanteRedePublicaEnsino != "S" || "N");
		}
		

		do{
			printf("Qual a sua renda familiar?\n\n");
			scanf("%d",&renda);
			
			if (renda != (float)renda || renda < 0) {
				prinf("\n\nVocê não digitou uma renda válida!  Tente de novo.");
			}
			
		}while(renda != (float)renda || renda < 0);

		do{
			printf("Digite a primeira letra do dia da semana? Digite em LETRA MAIÚSCULA\n\n");
			scanf("%d",&diaSemana);
			
			if (diaSemana != "D" || "S" || "T" || "Q" ) {
				prinf("\n\nVocê não digitou um dia válido!  Tente de novo.\n\n");
			}
			
		}while(diaSemana != "D" || "S" || "T" || "Q" );
		
		
		/*Processamento dos dados - Atribuição dos descontos*/
		
		if (((idadeCliente >= 2 && idadeCliente <= 12) || idadeCliente >= 60) && (diaSemana=="T")){
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




