// Exercício 1: Passagem de argumentos para o programa em linha de comando. Neste exercício, 
// vamos aprender a passar argumentos para programas Python em linha de comando. Para tanto, 
// siga os seguintes passos:
// a) Escreva o seguinte código Python, que lê e exibe os argumentos passados em linha de
// comando (no meu caso, eu chamei este programa de exemplo.py):
// b) Faça um teste de execução do seu programa em linha de comando. A imagem abaixo 
// mostra um teste realizado pelo professor, passando argumentos a, b, e c com o seguinte 
// comando: python3 exemplo.py a b c

// Exemplo de código:
// import sys 
// if __name__ == "__main__": 
//     print(f"Número de argumentos: {len(sys.argv)}")
//     for i, arg in enumerate(sys.argv): 
//         print(f"Argumento {i}: {arg}")

// Exemplo de saída do programa, executado em linha de comando:
// Número de argumentos: 4
// Argumento 0: exemplo.py
// Argumento 1: a
// Argumento 2: b
// Argumento 3: c