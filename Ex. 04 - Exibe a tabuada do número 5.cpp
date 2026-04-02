/* ######## IFSP - CAMPUS: CUBATÃO/SP #######
   # Curso: Técnico em Automação Industrial
   # Turma: CTA 271/ noturno
   # Docente: prof. Marco Aurélio
   # Disciplina: CBTPROG - Programação
   # Aluno: (matricula cb: 3042847) RAMON MATHEUS COSTA ALMEIDA
*/

/*
EXERCÍCIO 4: Exibir a tabuada do número cinco no intervalo de um a dez.

*/

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

	cout<<"##### Exibindo a tabuada do numero 5 #####\n\n";
	
	for(int contador =1; contador <=10; ++contador)
	{
		cout<<" 5 x "<<contador<<" = "<<(contador * 5)<<endl;
	}	
	
	return 0;
}