#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main(int argc, char** argv)
{
	//(I) declaração de variáveis
	
	long int valor;
	int resultadoFatorial;
	string novaExecucao = " ";
	
	do
	{
		valor = 0;		
		novaExecucao = "N"; // (II)Começa com 'N' para não ficar preso no looping.

		resultadoFatorial = 1; // (III) começa em 1 para ser multiplicado com o valor em fatorial.
		
		cout<<"\nDigite um valor positivo (e inteiro) entre 0 e 12 -> ";
		cin>>valor;
		
		// (IV) verifica se o valor digitado é positivo.
		if(valor > 1)
		{
		
			// (V)cálculo do fatorial [1]
			for(int i = valor; i > 0; i--)
			{
				//(V.I) o contador "i" recebe o conteúdo de "valor" e vai decrescendo -1
				//(V.II)o "resultadoFatorial" inicia c/ o nº 1 e vai sendo incrementado por ele mesmo x (vezes) o contador i
				
				resultadoFatorial = resultadoFatorial * i;
				

				cout<<resultadoFatorial<<" x "<<i<<" -> "<<resultadoFatorial<<endl;	


			}

			/* (V)cálculo do fatorial [2]
			for(int i = 1; i <= valor; i++)
			{
				//(V.I) o contador "i" recebe o conteúdo de "valor" e vai decrescendo -1
				//(V.II)o "resultadoFatorial" inicia c/ o nº 1 e vai sendo incrementado por ele mesmo x (vezes) o contador i
				
				resultadoFatorial = resultadoFatorial * i;
				
				cout<<"\n"<<i<<" -> "<<resultadoFatorial;
			}*/	
			
			

			
			cout<<"\n\nResultado => "<<valor<<"! = "<<resultadoFatorial;
			
			
			// (VI) pergunta se o usuário deseja efetuar novo cálculo ou sair do programa.
			cout<<"\nDeseja fazer novo calculo? (S/ N) -> ";
			cin>>novaExecucao;
			
			// (VII) se caso o usuário responder algo diferente de "S" e "N".
			while(novaExecucao != "N" && novaExecucao != "S")
			{
				cout<<"\n __Resposta Invalida __\nDigite somente 'S' p/ continuar ou 'N' para sair.";			
				cout<<"\nDeseja fazer novo calculo? (S/ N) -> ";
				cin>>novaExecucao;
			}
			
		}
		else
		{
			// (IX)informa ao usuário que o número informado é negativo e reinicia o looping.
			cout<<"\nValor invalido -> Esse valor é NEGATIVO.";
			novaExecucao = "S";
		}
		
	}
	//Se 'novaExecução é igual a 'S', o programa será reiniciado.
	while(novaExecucao == "S");
	

		
	return 0;
}