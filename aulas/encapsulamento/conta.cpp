#include "conta.hpp"

//Conta::Conta(unsigned agencia, unsigned numero) {
//  _agencia = agencia;
//  _numero = numero;
//}

Conta::Conta(unsigned agencia, unsigned numero) : _agencia(agencia), _numero(numero) {}

void Conta::descontarTarifa() {
  _saldo -= TARIFA;
}


unsigned Conta::numero() const {
  return _numero;
}


bool Conta::depositar(double valor) {
  if (valor < 0 ) return false;
  _saldo += valor;
  descontarTarifa();
  return true;
} 

bool Conta::sacar(double valor){
  if ( valor > _saldo ) return false;
  _saldo -= valor;
  descontarTarifa();
  return true;
}

double Conta::saldo() const {
  return _saldo;
}


