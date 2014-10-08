#ifndef LEGIONARIOS_H
#define LEGIONARIOS_H
#include "Data.h"
#include <vector>
#include <cstring>
using std::vector;
#include <string>
using std::string;

namespace legionarios
{
class Legionarios
{
public:
	Legionarios();
	Legionarios(int,string);
	Legionarios(int vida ,int quantidade, int dano, int velocidade , string formacao );
	void batalhar();
    string Formacao();
    void setQuantidade();
    int getQuantidade();
	void setVida();
	int getVida();
	inline void updano(){dano++;}
	static void const Createtime(Data);
	static int menu();
	static void info();
	
private:
                 int vida;
	             static int dano;
	             static const int velocidade;
	             int quantidade;
		         vector<string> formacao;
	             const static Data criacaolegionarios;
	             static bool escolha;
};

}

#endif // LEGIONARIOS_H
