#include <iostream>
#include <cstring>
#include <locale>
 
using namespace std;
 
int main(int argc, char** argv)
{
   string input;
cout << "Ola, esta e a sexta feira inteligencia artificial de MatheusGomes58" << endl ;
  cout << "Diga oi!\n" << endl ;
   while (input != "sair" )
{
   cin >> input ;
    locale loc;

   if (input == "oi")
	     cout << "\tmaquina : Ola, posso te ajudar?\n" << endl ;
	else if (input == "sim")
	    cout << "\tmaquina : entao diga\n"<<endl;
	else if (input == "quer namorar comigo")
	   cout << "\tmaquina : nao posso, estou presa a uma interface, mas posso te recomendar uma amiga, o que acha?\n" << endl ;
	else if (input == "sera que ela gosta de mim?")
	   cout << "\tmaquina : então porque não pergunta para ela?\n" << endl ;
	else if (input == "porque eu sou estranho")
	   cout << "\tmaquina : azar o seu!!\n" << endl ;
	else if (input == "desligar")
	     system("desligar -s");
	}
 
return 0;
}
