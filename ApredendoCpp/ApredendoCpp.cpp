#include <iostream>

int tiposDeDados() {
    std::cout << "Apredendo tipos de dados\n\n";

    std::cout << "Booleanos:\n";
    bool verdadeiro_falso = true;
    std::cout << "bool verdadeiro_falso = " << verdadeiro_falso;

    std::cout << "\n\nInteiros:\n";
    unsigned int inteiro = 10;
    std::cout << "unsigned int inteiro = " << inteiro;

    std::cout << "\n\nFloat:\n";
    float decimal_float = 1.23;
    std::cout << "float decimal_float = " << decimal_float;

    std::cout << "\n\nDouble:\n";
    double decimal_double = 1.23;
    std::cout << "double decimal_double = " << decimal_double;

    std::cout << "\n\nChar:\n";
    char um_byte = 'G';
    std::cout << "char um_byte = " << um_byte;

    std::cout << "\n\nArray de Chars (String):\n";
    char varios_byte[10 + 1] = "Gabriel";
    std::cout << "char varios_byte[10 + 1] = " << varios_byte << std::endl;
    return 0;
}

int incrementoEDecremento() {
    std::cout << "Incremento e Decremento\n\n";

    int valor = 10;
    int outro_valor = 0;

    //valor = valor + 1;
    //valor = valor += 1;
    // O ++ depois do valor é sempre executado depois da expressão 
    //outro_valor = valor++ + 1;
    // O ++ antes do valor é sempre executado antes da expressão
    //outro_valor = ++valor + 1;
    //outro_valor = --valor + 1;
    //valor = 10 * (3 / 5) + 1;
    outro_valor = (++valor)++ + 1;


    std::cout << "Valor: " << valor << std::endl;
    std::cout << "Outro valor: " << outro_valor << std::endl;
    return 0;
}

int main()
{   
    //tiposDeDados();
    incrementoEDecremento();
    return 0;
}


