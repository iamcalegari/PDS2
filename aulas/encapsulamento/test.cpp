#include <iostream>
#include <string>
#include <cstring>

using namespace std; //tomar cuidado com namespace std, usei aqui pq ainda nao ta confuso

 int main(){

    int a,e,i,o,u = 0;
    int j = 0; //Olhar com o professor depois, poderia colocar i no for mesmo i sendo um inteiro ja declarado?, acredito que sim mas ficou confuso

    string palavra;
    cin >> palavra;
    for ( int i = 0; i <= palavra.size() ; i++){ 

        if (palavra[i] == 'a'){
            a = a + 1;
        }
        else if (palavra[i] == 'e'){
            e = e + 1;
        }
        else if (palavra[i] == 'i'){
            i = i + 1;
        }
        else if (palavra[i] == 'o'){
            o = o + 1;
        }
        else if (palavra[i] == 'u'){
            u = u + 1;
        }

    }


    if (a != 0){     
        cout << "a : " << a << endl;
        }
    if (e != 0){
        cout << "e : " << e << endl;
        }
    if (i != 0){
        cout << "i : " << i << endl;
        }
    if (o != 0){
        cout << "o : " << o << endl;
        }
    if (u != 0){
        cout << "u : " << u << endl;
        }
    return 0;
}
