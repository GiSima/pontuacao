#include <bits/stdc++.h>

using namespace std;

int main()
{
    int compras, atraso;
    int pontCompras;
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

    //calculo do score de compras
    if (compras == 0){pontCompras = 0;}
    else if (compras * ticket <= 3000){
        if (compras <= 2){pontCompras = 20;}
        else {pontCompras = 40;}
    }
    else {pontCompras = 60;}

    cout << endl << "Score de volume de compras = " << pontCompras << " pontos" << endl;

    return 0;
}
