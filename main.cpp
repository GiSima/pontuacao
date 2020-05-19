#include <bits/stdc++.h>

using namespace std;

int main()
{
    int compras, atraso;
    int pontCompras, inadiplencia, pontForma;
    int pontFinal;
    double ticket;
    string forma;

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

    //calculo do score de inadiplencia e pagamento
    if (atraso > 1 || compras == 0){inadiplencia = 0;}
    else if(compras > 0){
        if (atraso == 1){inadiplencia = 15;}
        else if(atraso == 0){inadiplencia = 30;}
    }

    if (forma == "D"){pontForma = 5;}
    else if (forma == "B" || forma == "C"){pontForma = 10;}

    cout << "Score de inadimplencia = " << inadiplencia << " pontos" << endl;
    cout << "Score de forma de pagamento = " << pontForma << " pontos" << endl;

    //pontuação final
    pontFinal = pontCompras + inadiplencia + pontForma;

    cout << endl << "Classificacao final = ";

    if (pontFinal <= 25){cout << "CLIENTE BRONZE";}
    else if (pontFinal <= 75){cout << "CLIENTE PRATA";}
    else {cout << "CLIENTE OURO";}
    cout << endl;

    return 0;
}
