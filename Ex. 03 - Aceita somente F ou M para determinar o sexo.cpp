/* ######## IFSP - CAMPUS: CUBATÃO/SP #######
   # Curso: Técnico em Automação Industrial
   # Turma: CTA 271/ noturno
   # Docente: prof. Marco Aurélio
   # Disciplina: CBTPROG - Programação
   # Aluno: (matricula cb: 3042847) RAMON MATHEUS COSTA ALMEIDA
*/

/*
EXERCÍCIO 3: Entrar via teclado com o sexo de determinado usuário, aceitar somente “F” ou “M” como
respostas válidas.

*/

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	
	string sexoUsuario = "";
	do
	{
		
	
	cout<<"\n(M) Masculino\n(F) - Feminino\nDigite o sexo (M/ F) -> ";
	cin>>sexoUsuario;
	
	if (sexoUsuario!="F" && sexoUsuario!="M")
		{
		cout<<"\nResposta Invalida\n\n";
		cout<<"####[SEXO]####\n Digite somente:\n(M) para Masculino\n(F) para Feminino\n";
		}
	
	}
	while((sexoUsuario != "F" && sexoUsuario != "M"));
		
	
	return 0;
}
