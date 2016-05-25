//
//  main.cpp
//  Exercicio 36
//
//  Created by Gustavo Henrique Furtado Junqueira on 12/05/16.
//  Copyright © 2016 Gustavo Henrique Furtado Junqueira. All rights reserved.
//

#include <iostream>
using namespace std;
int main (){

    string nome_reponsavel;
    int numero_filhos;
    int valor_escolinha;
    
    cout<<"Digite o nome do responsavel:\n";
    cin>>nome_reponsavel;
    cout<<"Digite a quantidade de filhos:\n";
    cin>>numero_filhos;
    
    valor_escolinha=120.00;
    
    if (numero_filhos==1){
        cout<<"O valor do desconto é de 10 % e o valor mensal é: R$"<<valor_escolinha/1.10<<"\n";
    }
    else if (numero_filhos==2){
        cout<<"O valor do desconto é de 15 % e o valor mensal é: R$"<<valor_escolinha/1.15<<"\n";
    }
    else if (numero_filhos==3){
        cout<<"O valor do desconto é de 20 % e o valor mensal é: R$"<<valor_escolinha/1.20<<"\n";
    }
    
    return 0;
    

}