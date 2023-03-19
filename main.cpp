#include <iostream>
#include <string>
using namespace std;


float calculaMedia(int n)
{
    int soma = 0;
    int x = 0;
    for(int i = 1; i <= n; i++)
    {
        cout << "Digite Numero Inteiros: " << endl;
        cin >> x;
        soma = soma + x;
    }
    return (float)soma/n;
}

float VetorCalculaMedia(int n, float vet[])
{
    float soma = 0;
    for(int i = 0; i < n; i++)
    {
        cout << "Digite UM Numero No Indice VET[" << i+1 <<"] = ";
        cin >> vet[i];
        soma = soma + vet[i];
    }
    return soma/n;
}

int procuraCharNaString(string str, char ch)
{
    int x = 0;
    for(int i = 1; i <= str.size(); i++)
    {
        if(str[i] == ch)
        {
            x = i + 1;
        } else
        {
            x = -1;
        }
    }

    return x;
}

bool ehPrimo(int n)
{
    int aux = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            aux++;
    }

    if(aux <= 2)
    {
        return true;
    } else
    {
        return false;
    }
}

int fatorial(int n)
{
    int result = 1;
    for(int i = 1; i <= n; i++)
    {
        result = result * i;
        cout << "Valor: " << result << endl;
    }

    return result;

}

int main()
{
    int n;

    // Faca um programa que leia do teclado um numero inteiro n e em seguida leia n numeros reais e calcule a sua meedia.

    cout << "Digite Um Valor Para N: " << endl;
    cin >> n;

    // Implemente agora o exerc ́ıcio (1) utilizando uma funcao que possua o seguinte prototipo: float leCalculaMedia(int n);

    float resultado;
    resultado = calculaMedia(n);
    cout << "A Media e: " << resultado << endl;

    // Faca uma funcao que receba como paraametros um vetor de numeros reais e o seu tamanho n e que leia do teclado n numeros reais, guarde-os no vetor e calcule a sua media.
    // funcao deve retornar a meedia ao final.
    // float leVetorCalculaMedia(int n, float vet[]);

    float resultado2;
    float v[5];
    resultado2 = VetorCalculaMedia(5, v);
    cout << "A Media Em Vetores e: " << resultado2 << endl;

    // Faca uma funcao que, dados uma string str e um caractere ch, procure e retorne a posicao da primeira ocorrencia de ch na string str. Se ch nao for encontrada
    // em str, retornar o valor −1.
    // int procuraCharNaString(string str, char ch);

    string frase;
    char ch;
    int resultado3;

    cout << "Digite Uma Frase: " ;
    getline(cin, frase);
    cout << "Digite Um Caractere Nao Especial: ";
    cin >> ch;

    resultado3 = procuraCharNaString(frase, ch);
    cout << "Resutlado: "<< resultado3 << endl;

    // Faca uma funcao que receba um numero inteiro n > 0 e determine se este e um numero primo. A funcao deve retornar um valor booleano: true ou false.

    int n2;
    bool resultado4;
    cout << "Digite um Valor de N Maior que 0: ";
    cin >> n2;

    resultado4 = ehPrimo(n2);

    cout << "Resultado: " << resultado4 << endl;

    // Faca um programa que leia os valores logicos de  ́X, Y e Z e armazene o resultado das seguintes operacoes logicas:


    // Faca uma funcao para calcular o fatorial de um numero inteiro n > 0. Faca um programa que leia um numero
    // inteiro do teclado, em seguida utilize a funcao pará calcular o seu fatorial e, por fim, exiba o resultado na tela.
    // int fatorial(int n);

    int n3;
    int resultado5;
    cout << "Digite um Valor de N Maior que 0: ";
    cin >> n3;

    resultado5 = fatorial(n3);
    cout << "O Fatorial e: " << resultado5 << endl;

    return 0;
}
