#include <iostream>
#include <string>

/// @brief Calcula o mdc entre dois numeros naturais
///
/// @param m O primeiro numero a ser considerado
/// @param n O segundo numero a ser considerado
/// @return  O valor do mdc entre @p m and @p n
int mdc(unsigned m, unsigned n) {
  int minor, major, mdcValue = 0;

  if (n >= m) {
    minor = m;
    major = n;
  }else {
    minor = n;
    major = m;
  }

  for (int i = minor; i >= 1; i--){
    mdcValue = i;
    if(minor % mdcValue == 0 && major % mdcValue == 0) break;
  }

  return mdcValue;
}
  
/// @brief Conta a quantidade de coprimos em um intervalo
///
/// O intervalo eh fechado, ou seja, inclui os limites
/// inferior e superior. Por exemplo, a quantidade
/// de numeros coprimos de 9 no intervalo [6, 9] eh 2,
/// ja que mdc(7, 9) = 1, mdc(8, 9) = 1 e mdc(9, 9) = 9.
///
/// @param m O limite inferior do intervalo
/// @param n O limite superior do intervalo
/// @return  O numero de coprimos de @p n no intervalo
int count_coprimes(unsigned m, unsigned n) {
  int intervalSize, minor, major, counter = 0;


  if (n >= m) { 
    intervalSize = n - m;
    minor = m;
    major = n;
  }
  else {
    intervalSize = m - n;
    minor = n;
    major = m;
  }

  for (int i = minor; i <= major; i ++){
    int mdcValue = mdc(i, major);
    
    if(mdcValue == 1){
      counter++;
    }
  }
  return counter;
}

// NÃO ALTERE O CÓDIGO A SEGUIR!
enum class TestKind : char {
  mdc = 'm',
  coprimes = 'c',
};

int main() {
  char tkind;
  std::cin >> tkind;

  unsigned m, n;
  std::cin >> m >> n;
    
  switch (static_cast<TestKind>(tkind)) {
  case TestKind::mdc:
    std::cout << mdc(m, n) << std::endl;
    break;
  case TestKind::coprimes:
    std::cout << count_coprimes(m, n) << std::endl;
    break;
  }
  
  return 0;
}
