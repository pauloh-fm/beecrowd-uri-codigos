"""
Regras de jogo:
a tesoura corta o papel;
o papel embrulha a pedra;
a pedra esmaga o lagarto;
o lagarto envenena Spock;
Spock destrói a tesoura;
a tesoura decapita o lagarto;
o lagarto come o papel;
o papel contesta Spock;
Spock vaporiza a pedra;
a pedra quebra a tesoura.
"""

def pedraPapelTesouraLagartoSpock(entrada,entrada2):
    if entrada != entrada2:
        if entrada == "lagarto":
            if (entrada2 == "Spock" or entrada2 == "papel"):
                return "Caso #1: Bazinga!"
            else:
                return "Caso #2: Raj trapaceou!"
        elif entrada == "papel":
            if entrada2 == "pedra" or entrada2 == "Spock":
                return "Caso #1: Bazinga!"
            else:
                return "Caso #2: Raj trapaceou!"
        elif entrada == "pedra":
            if entrada2 == "Spock" or entrada2 =="lagarto":
                return "Caso #1: Bazinga!"
            else:
                return "Caso #2: Raj trapaceou!"
        elif entrada == "Spock":
            if entrada2 == "tesoura" or entrada2 == "pedra":
                return "Caso #1: Bazinga!"
            else:
                return "Caso #2: Raj trapaceou!"
        elif entrada == "tesoura":
            if entrada2 == "papel" or entrada2 == "lagarto":
                return "Caso #1: Bazinga!"
            else:
                return "Caso #2: Raj trapaceou!"
    else:
        return "Caso #3: De novo!"
nEntradas = int(input()) # quantidade de vezes jogadas
while nEntradas > 0:
    entrada1,entrada2 = input().split(" ") # string de entrada
    print(pedraPapelTesouraLagartoSpock(entrada1,entrada2))
    nEntradas-=1

