#include <bits/stdc++.h>

using namespace std;

int main()
{
    int compras, atraso;
    double ticket;
    char forma;

    //cabeçalho
    cout << "SISTEMA DE PERFIL DE CLIENTE" << endl;
    cout << "--------------------------------" << endl;
    cout << "INFORME OS DADOS DO ULTIMO ANO" << endl;

    //leitura volume
    cout << endl << "Quantas compras o cliente fez no ultimo ano? "; cin >> compras;
    cout << "Qual o ticket medio? "; cin >> ticket;

    //leitura outros dados
    cout << endl << "Quantas vezes o cliente atrasou o pagamento? "; cin >> atraso;
    cout << "A maioria das compras foi em dinheiro, cartao, ou boleto (D/C/B)? "; cin >> forma;

    return 0;
}
