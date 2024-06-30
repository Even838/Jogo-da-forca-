 #include <iostream>
using namespace std;

int main() {
    char let[3] = {'S', 'o', 'l'};
    char l1, l2, l3;

    cout <<"\n dica tem 3 letras e tem no nome de uma planta \n";
    
    cout << "\nDigite a primeira letra: ";
    cin >> l1;

    cout << "Digite a segunda letra: ";
    cin >> l2;

    cout << "Digite a terceira letra: ";
    cin >> l3;

    if (l1 == let[0] && l2 == let[1] && l3 == let[2]) {
        cout << "（｡>‿‿<｡ ） você ganhou !" << endl;
    } else {
        cout << "ಥ_ಥ voce errou" << endl;
    }

    return 0;
}
