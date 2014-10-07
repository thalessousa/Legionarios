#ifndef LEGIONARIOS_H
#define LEGIONARIOS_H
#include "Data.h"
#include <iostream>
#include <vector>
using std::vector;

#include <string>
using std::string;

namespace legionarios
{

class Legionarios
{
public:
	Legionarios();
	Legionarios(const Legionarios &);
	Legionarios(int vida,int quantidade, int dano, int velocidade , string formacao );
    string Formacao();
    void setQuantidade();
    int getQuantidade();
	void setVida();
	int getVida();
	void upvelocidade();
	void updano();
	static void const Createtime();
	inline void Submenu(){ cout<< "Olá grandes legionarios,o que desejam fazer? \n";}
	
private:
	static const int dano;
	static const int velocidade;
	             int quantidade;
		vector<string> formacao;
	const static Data criacaolegionarios;
	static bool escolha;
};

}

#endif // LEGIONARIOS_H
