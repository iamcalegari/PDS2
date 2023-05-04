#include <string>

class Conta {
  public:
    Conta(unsigned agencia, unsigned numero);
    unsigned agencia() const;
    unsigned numero() const;
 
    double saldo() const;
    bool depositar(double valor);
    bool sacar(double valor);

  private:
    unsigned _agencia;
    unsigned _numero;
    double _saldo;
    
    static constexpr double TARIFA = 0.25;

    void descontarTarifa();
};
