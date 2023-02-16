#include <iostream>
#include <stdlib.h>

using namespace std;

class Aviao { 

public:

  int vel = 0;
  int velmax = 0;
  string tipo;
  void ini(int tipo); // prototipando a funçao/metodo

private:

};

// criando metodo/função Aviao
void Aviao:: ini (int tp) // verifica o valor que esta em tp
{
  if(tp == 1){
    // (this) = para essa classe a propriedade (velmax) recebe 800
    this->velmax = 800;
    this-> tipo = "Jato";
  }
  else if (tp == 2) {
    this->velmax = 250; 
    this-> tipo = "Mono motor";
  }
  else if(tp == 3){
    this->velmax = 180; 
    this-> tipo = "Planador";
  }
}

int main() {

  
  Aviao *av1 = new Aviao(); // instanciando/criando novo objeto av1 do tipo Aviao
  Aviao *av2 = new Aviao();
 
  av1 -> ini(1); // passando 1 e chamando a função dentro da classe publica
  av2 -> ini(2);
  
  cout << av1->velmax << endl;
  cout << av2->velmax << endl;
  
  return 0;
}