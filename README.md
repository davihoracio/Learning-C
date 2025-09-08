# Learning C: Repositório de Estudos e Soluções

Este repositório é dedicado ao aprendizado e à prática da linguagem C. Ele contém uma coleção organizada de soluções para problemas de programação, abrangendo desde conceitos fundamentais de entrada/saída até estruturas de dados e lógica mais complexas. O foco principal é resolver desafios comuns encontrados em plataformas de programação competitiva (como Beecrowd/URI Online Judge).

## 🚀 Sobre o Projeto

O objetivo deste projeto é documentar o progresso no aprendizado da linguagem C, servindo como um portfólio de soluções e um guia de referência para conceitos fundamentais da programação estruturada. Os problemas são categorizados em diretórios baseados nos principais conceitos de programação exigidos para resolvê-los.

## 💻 Tecnologias Utilizadas

* **Linguagem Principal:** C
* **Bibliotecas Padrão (Standard Libraries):**
    * `stdio.h` (Standard Input/Output)
    * `math.h` (Funções Matemáticas)
    * `string.h` (Manipulação de Strings)
    * `stdlib.h` (Funções Gerais, como `abs`)

learning-c/
│
├── 📁 Introdução/
│   # Soluções focadas em I/O, aritmética básica e cálculos simples.
│
├── 📁 Condicionais/
│   # Problemas que exigem lógica de decisão (if/else, switch).
│
├── 📁 Laços/
│   # Desafios resolvidos com estruturas de repetição (for, while, do-while).
│
└── 📁 Funções/
    # Soluções que aplicam modularização e criação de funções customizadas.


## 📚 Tópicos e Desafios Abordados

Abaixo está um detalhamento dos conceitos praticados em cada categoria:

### 1. Introdução (Conceitos Básicos)

Soluções focadas na leitura (`scanf`) e escrita (`printf`) de dados, operações aritméticas, manipulação de tipos (int, double) e uso básico de bibliotecas.

**Exemplos de problemas resolvidos:**
* Cálculos de área (Círculo, Área Geral)
* Médias ponderadas (Média 1, Média 2)
* Cálculos de salário, bônus e consumo
* Cálculo de volume (Esfera)
* Distância entre dois pontos
* Operações básicas (Soma Simples, Produto Simples, Diferença)

### 2. Condicionais (Lógica e Decisão)

Implementações que utilizam estruturas de seleção para controlar o fluxo do programa com base em condições lógicas.

**Exemplos de problemas resolvidos:**
* Validação complexa de critérios (Teste de Seleção 1)
* Determinação de intervalos numéricos
* Seleção de menu usando `switch-case` (Lanche)
* Cálculo de média com status do aluno (Aprovado, Reprovado, Exame)
* Mapeamento de coordenadas cartesianas (Q1, Q2, Origem, etc.)
* Classificação e ordenação simples (Sort Simples)
* Validação de formas geométricas (Triângulo)
* Verificação de múltiplos

### 3. Laços (Repetição)

Soluções que exigem a repetição de blocos de código, seja por um número definido de vezes (`for`) ou enquanto uma condição for verdadeira (`while`).

**Exemplos de problemas resolvidos:**
* Cálculo de MDC (Máximo Divisor Comum)
* Contagem e análise de dados (Positivos, Pares, Ímpares, Média)
* Geração de sequências (Fibonacci Fácil, Resto 2)
* Processamento de múltiplos casos de teste (Sequência de Números e Soma)
* Validação de entrada de dados com loops (Várias Notas com Validação)
* Busca de valores (Maior e Posição)
* Processamento de dados até condição de parada (Construindo Casas)
* Uso de lógica matemática e loops (Kage Bunshin no Jutsu)

### 4. Funções (Modularização)

Aplicação de funções para dividir problemas complexos em partes menores e reutilizáveis, melhorando a legibilidade e a manutenção do código.

**Exemplos de problemas resolvidos:**
* Conversão de unidades (Conversão de Tempo)
* Decomposição de valores (Notas e Moedas)
* Implementação de fórmulas matemáticas (Fórmula de Bhaskara) usando ponteiros para múltiplos retornos
* Formatação de saída baseada em funções (Aumento de Salário, PUM)
* Manipulação de strings e caracteres (LED, Cifra de César, Paridade)
* Conversão de bases numéricas (Hexadecimal)
* Funções simples de cálculo (Pneu)

## 💡 Como Compilar e Executar

Todos os arquivos são programas C independentes. Para compilar e executar um arquivo específico (por exemplo, `01 Hello World.c`), você pode usar um compilador C padrão como o GCC:

```bash
# 1. Navegue até o diretório do arquivo (ex: Introdução)
cd Introdução

# 2. Compile o arquivo desejado
#    (Usando a flag -o para nomear o executável e -lm se a biblioteca math.h for necessária)
gcc "01 Hello World.c" -o hello_world

# 3. Execute o programa compilado
./hello_world
