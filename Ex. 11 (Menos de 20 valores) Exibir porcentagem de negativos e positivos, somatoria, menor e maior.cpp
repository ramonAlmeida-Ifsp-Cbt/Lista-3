/* ######## IFSP - CAMPUS: CUBATÃO/SP #######
   # Curso: Técnico em Automação Industrial
   # Turma: CTA 271/ noturno
   # Docente: prof. Marco Aurélio
   # Disciplina: CBTPROG - Programação
   # Aluno: (matricula cb: 3042847) RAMON MATHEUS COSTA ALMEIDA
*/

/* ###### LISTA 3 #############################################
EXERCÍCIO 11: Entrar via teclado com “N” valores quaisquer. O valor “N” (que representa a quantidade de 
números) será digitado, deverá ser positivo, mas menor que vinte. Caso a quantidade não 
satisfaça a restrição, enviar mensagem de erro e solicitar o valor novamente. Após a 
digitação dos “N” valores, exibir: 
a. O maior valor; 
b. O menor valor; 
c. A soma dos valores; 
d. A média aritmética dos valores; 
e. A porcentagem de valores que são positivos; 
f. 
A porcentagem de valores negativos; 
*/


#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv)
{
	
	//declaração de variáveis
	
	double maiorValor = 0;
	double menorValor = 0;
	double somatoria = 0;
	double mediaAritmetica = 0;
	double porcentagemPositivos = 0;
	double porcentagemNegativos = 0;
		
	int contador = 0;
	int quantidadeValores = 0;
	int contadorNegativos = 0;
	int contadorPositivos = 0;
	
	//espaço máximo do vetor: 19 (0 < N < 20)
	double valores[19];// espaço 'N' do vetor: do 0 ao 18. 


	//  titulo - definindo quantidade de valores
	cout<<"----> Forneca a quantidade entre 1 e 19 valores <----\n\n";

	
	//Solicitando aom usuário informar a quantidade de valores
	do
	{
		
		//verifica se o valor informado é positivo
		cout<<"\n### Informe somente numeros inteiros ###\n";
		cout<<"Quantos numeros serah fornecido? -> ";
		cin>>quantidadeValores;
		
		if(quantidadeValores <= 0 )
		{
			cout<<"\n\nDigite somente valores positivos.\n";
		}
		
		if(quantidadeValores >=20)
		{
			cout<<"\n\nDigite somente valores menores que 20.\n";
		}

	}
	while(quantidadeValores <= 0 ^ quantidadeValores >=20);
	
	
 	 //entrada de valores
	do
	{
		// a cada looping se requere ao usuário informar um valor
		cout<<"\nDigite o "<<(contador + 1)<<"º valor: ";
		cin>>valores[contador];

		// se for positivo, então vai para o próx. looping
		++contador;
	}
	while(contador < quantidadeValores);
	
	//zerando o contador.
	contador = 0;
	
	//limpa a tela
	system("cls");// da biblioteca <stdlib>
	
	/**** NESSE LOOPING:
	 * 1) exibe a lista dos valores informados pelo usuário.
	 * 2) verifica o maior valor.
	 * 3) faz a somatória dos valores.
	 * 4)contabiliza os números negativos e positivos
	 *****************************************/
	 do
	{
		cout<<"\n"<<(contador + 1)<<"º valor: "<<valores[contador];
		
		//verificando se o número é positivo ou negativo
		if(valores[contador] > 0)
		{
			++contadorPositivos;
		}
		
		if(valores[contador] < 0)
		{
			++contadorNegativos;
		}
		
		//verifica o maior valor e o aloca na variável 'maioraAlor'
		if (maiorValor < valores[contador])
		{
			maiorValor = valores[contador];				
		}
		
		// somando todos os valores
		somatoria = somatoria + valores[contador];
		
		++contador;
	}
	while(contador < quantidadeValores);
 	 /************************************************************/
	
  /*** Verifica o MENOR VALOR ****/
	menorValor = maiorValor;
	
	for(;contador>=0;--contador)
	{
		if (menorValor > valores[contador])
		{
			menorValor = valores[contador];
		}
	}
	/************************/
	
	// calcula a média aritmética
	mediaAritmetica = somatoria/10;
	
	//calcula a porcentagem de negativos e positivos
	// os contadores, por serem inteiros, precisam ser convertidos para 'double', p/
	porcentagemPositivos = ((static_cast<double>(contadorPositivos)) / (static_cast<double>(quantidadeValores))) * 100.0;
	//porcentagemNegativos = ((static_cast<double>(contadorNegativos)) / (static_cast<double>(quantidadeValores))) * 100.0;
	
	porcentagemNegativos = contadorNegativos/ quantidadeValores * 100.0;

	//Exibe os resultados
	cout<<"\n\nMaior valor: "<<maiorValor;
	cout<<"\nMenor valor: "<<menorValor;
	cout<<"\nSomatoria: "<<somatoria;
	cout<<"\nMedia Aritmetica: "<<mediaAritmetica<<endl;
	cout<<"\nPorcentagem - positivos: "<<porcentagemPositivos<<"%";
	cout<<"\nPorcentagem - negativos: "<<porcentagemNegativos<<"%";

	return 0;
}