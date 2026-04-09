/* ######## IFSP - CAMPUS: CUBATÃO/SP #######
   # Curso: Técnico em Automação Industrial
   # Turma: CTA 271/ noturno
   # Docente: prof. Marco Aurélio
   # Disciplina: CBTPROG - Programação
   # Aluno: (matricula cb: 3042847) RAMON MATHEUS COSTA ALMEIDA
*/

/* ###### LISTA 3 #############################################
EXERCÍCIO 9: Exibir os trinta primeiros valores da série de Fibonacci. A série: 1, 1, 2, 3, 5, 8, ...
*/

/* ######## teoria (em resumo) da Série de Fibonacci #######
* 1) Princípio de funcionamento: "[1º]'termoAnterior' + [2º]'proximoTermo' = [3º]soma dos termos."
* 2) Depois da soma, aloca o valor da '[2] próx. termo' para a '[1] termoAnterior'
* 3) E o valor da '[3] soma' para a '[2] próx. termo'.
* 4) Nos primeiros dois termos da Série:
* 	I) O 1º valor começa com o nº 1 (um).
* 	II) O 2º valor é mediante a soma = termoAnterior + termoPosterior
* 	Obs: No 2º valor, como o termoAnterior é 1, e não tem um termo posterior (termoPosterior = 0), então:
*    	1 + 0 = 1 (esse é o segundo termo).
* 6) Daí em diante, segue o Princípio de funcionamento padrão (itens 1, 2 e 3).
*
####################################################
*/

#include <iostream>;

using namespace std;

int main(int argc, char** argv)
{
	/***** (1)DECLARAÇÃO DE VARIÁVEIS *****/
	int termoAnterior = 0, termoPosterior = 0, somaDosTermos = 0;
	int tamanhoSerieFibonacci = 0;
	int sair = 0;
	
	/***** (2)TÍTULO EXIBIDO EM TELA ******/
	cout<<"****** SERIE DE FIBONACCI *******\n\n";
	
	do
	{
		
		/****(3) DEFININDO TAMANHO DA SÉRIE  DE FIBONACCI A SER EXIBIDA. ***/
		
		//(3.1)Se pede o tamanho da Série de Fibonacci.
		cout<<"Quantos numeros da Serie voce deseja ver? -> ";
		cin>>tamanhoSerieFibonacci;
		
		//(3.2)verifica se o usuário digitou uma quantidade válida (>0).
		if(tamanhoSerieFibonacci <=0)
		{
			cout<<"valor 0 (zero) ou negativo sao invalidos.\nInforme um valor positivo (a partir de 1).";
		}
		else
		{
			
			/***** (4) EXIBE A SERIE DE FIBONACCI *****/
			
			//(4.1)Dá um "reset" nas variáveis a cada inicio/ reinicio de contagem
			termoAnterior = 0; 
			termoPosterior = 1; 
			somaDosTermos = 0;
			
			//(4.2) Looping que Exibe a Série de Fibonacci
			for (int contador = 1; contador <=tamanhoSerieFibonacci; contador++)
			{
				
				//(4.3) Soma dos termos da série 
				somaDosTermos = termoAnterior + termoPosterior;
			
				//Exibe o resultado da soma
				cout<<endl<<contador<<"º numero: "<<somaDosTermos;
				
				//(4.3) Controle para fazer a troca dos termos só a partir da 3ª contagem.
				/****************************************************************************************
				*  Enquanto o contador estiver entre '1', será exibido na tela só o valor "1"...
				* ... por conta da variável 'termoPosterior', que lhe foi atribuida o valor "1"...
				* (vide comentário 4.1).
				* Soma = 0 + 1 = 1
				* **************************************************************************************/
				if(contador > 1)
				{

					//(4.4) - troca o Anterior pelo Seguinte, e o Seguinte pela Soma.
					termoAnterior = termoPosterior;
					termoPosterior = somaDosTermos;	
				}
			}	
		}

		/**** (5.0) MENU - Para Sair ou Continuar****/
		cout<<"\n\n***** [MENU] *****\n";
		cout<<"1 - Sair\n";
		cout<<"2 - Continuar\n";
		cout<<"Digite o numero referente a opcao desejada -> ";
		
		cin>>sair;
		
	}
	while(sair == 2);
		
	return 0;
}
