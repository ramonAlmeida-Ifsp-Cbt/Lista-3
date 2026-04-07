/* ######## IFSP - CAMPUS: CUBATÃO/SP #######
   # Curso: Técnico em Automação Industrial
   # Turma: CTA 271/ noturno
   # Docente: prof. Marco Aurélio
   # Disciplina: CBTPROG - Programação
   # Aluno: (matricula cb: 3042847) RAMON MATHEUS COSTA ALMEIDA
*/

/* ###### LISTA 3 #############################################
EXERCÍCIO 8: Exibir a soma dos números inteiros positivos do intervalo de um a cem.
*/

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	
	int valor1 = 0, valor2 = 0;
	
	
	// Verifica se o usuário informou os valores dentro da faixa requerida (entre 0 a 100)
	do
	{
		cout<<"\n**** ATENCAO: Digite somente numeros inteiros e positivos *****\n";
		cout<<"ANTENCAO (2): Os numeros devem ser do intervalo de um a cem.\n\n";
		
		cout<<"Informe o primeiro valor -> ";
		cin>>valor1;
		
		cout<<"\nInforme o segundo valor -> ";
		cin>>valor2;
		
		if(valor1 < 0)
			cout<<"O primeiro valor informado eh negativo";
		
		if(valor2 < 0)
			cout<<"O segundo valor informado eh negativo";
		
		if(valor1 > 100)
			cout<<"O primeiro valor informado eh maior do que 100 (cem).\n";
		
		if(valor2 > 100)
			cout<<"O segundo valor informado eh maior do que 100 (cem).\n";		
		
	}
	while(valor1 < 0 || valor2 < 0 || valor1 >100 || valor2 >100);

	cout<<"\n\nSoma: "<<valor1<<" + "<<valor2<<" = "<<(valor1 + valor2);

	
	return 0;
}