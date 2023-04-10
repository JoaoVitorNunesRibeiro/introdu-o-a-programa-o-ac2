#include <iostream> 
using namespace std;

int main() {
   //declaração variaveis
   int Var = 3;
   //usa "*" na declaração ponteiro, o "p" na variavel "Var" poderia ser qualquer outra coisa
   int* pVar;
   pVar = &Var;

   //codigo pra aparecer o programa na tela
   cout << Var << endl;
   cout << *pVar << endl;
   cout << pVar << endl;

}