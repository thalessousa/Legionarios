#include "Legionarios.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <vector>
#include <cstring>
using namespace std;
using namespace legionarios;

Legionarios::Legionarios(int vida ,int quantidade, int dano, int velocidade , string formacao )
{
  vida=320;
  quantidade=160;
  dano=30;
  velocidade=3;
  formacao = "";
}

int Legionarios::menu()
{
    int opcao;
     system("cls");
     cout << "Menu\n\n";
	 cout << "1 - Batalhar \n" << endl;
     cout << "2 - Informacao sobre esquadrao \n" << endl;
     cout << "3 - Aumentar dano \n" << endl;
     cout << "4 - Mudar formacao \n" << endl;
     cout << "0 - Retornar para a cidade \n" << endl;
     cin >> opcao;
return opcao;
}   
    void Legionarios::batalhar()
	{
		vida = vida-dano;
	};
	void Legionarios::info(){
		
cout << "Formacao : " << formacao;
cout << "Quantidade de vida : " << vida;
cout << "Dano : " << dano;
cout << "Velocidade : " << velocidade;
};
    void Formacao();
    void setQuantidade();
    int getQuantidade();
	void setVida();
	int getVida();
    void const Createtime();

