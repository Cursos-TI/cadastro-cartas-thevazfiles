# Desafio Super Trunfo - Países - Cadastro das Cartas

Bem-vindo ao desafio "Super Trunfo - Países"! No jogo Super Trunfo, os jogadores comparam as propriedades das cartas para determinar a mais forte. O tema deste Super Trunfo é "Países," onde você comparará as propriedades das cidades.

A empresa MateCheck contratou você para desenvolver a parte inicial do jogo, que consiste no cadastro das cartas.

O desafio está dividido em três níveis: Novato, Aventureiro e Mestre, com cada nível adicionando mais complexidade ao anterior. Você deve escolher qual desafio quer realizar.

### 🚨 Atenção: 
O nível Novato do desafio é focado apenas no cadastro das cartas, utilizando as funções scanf para ler os dados e printf para exibi-los.

## 🎮 Nível Novato

No nível Novato, você iniciará criando o sistema básico do jogo Super Trunfo com o tema "Países". As cartas serão divididas por estados, cada um com quatro cidades. 

Cada país será dividido em oito estados, identificados pelas letras de A a H. Cada estado terá quatro cidades, numeradas de 1 a 4. A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).

### 🚩 Objetivo:
- Criar cartas representando cidades, contendo as seguintes propriedades:
  - **População**
  - **Área**
  - **PIB**
  - **Número de pontos turísticos**
  
### ⚙️ Funcionalidades do Sistema:
- O sistema permitirá ao usuário cadastrar cartas de cidades, inserindo manualmente os dados via terminal de comando.
- Após o cadastro, o sistema exibirá os dados de cada cidade de forma clara e organizada.

### 📥 Entrada e 📤 Saída de Dados:
- O usuário insere os dados de cada carta interativamente.
- Após o cadastro, os dados são exibidos com todas as propriedades da cidade, uma por linha.

---

## 🛡️ Nível Aventureiro

No nível Aventureiro, você expandirá o sistema para incluir propriedades calculadas, permitindo uma análise mais detalhada das cartas.

### 🆕 Diferença em relação ao Nível Novato:
- **Novas Propriedades Calculadas:**
  - **Densidade Populacional:** População dividida pela área da cidade.
  - **PIB per Capita:** PIB total dividido pela população.

### ⚙️ Funcionalidades do Sistema:
- O sistema agora calculará automaticamente a Densidade Populacional e o PIB per Capita com base nos dados inseridos.
- Essas novas propriedades serão adicionadas às informações exibidas para cada cidade.

### 📥 Entrada e 📤 Saída de Dados:
- O usuário continua inserindo os dados de cada carta interativamente.
- O sistema exibirá os dados, incluindo as novas propriedades calculadas, de forma clara e organizada.

---

## 🏆 Nível Mestre

No nível Mestre, você implementará comparações entre as cartas, utilizando operadores relacionais e manipulando grandes números com precisão.

### 🆕 Diferença em relação ao Nível Aventureiro:
- **Comparação de Cartas:**
  - O sistema permitirá ao usuário comparar duas cartas com base nas propriedades inseridas e calculadas.
  - Cada carta terá um "Super Poder", que é a soma de todas as propriedades.
  
### ⚙️ Funcionalidades do Sistema:
- O sistema utilizará operadores relacionais para determinar a carta vencedora com base nas propriedades comparadas.
- A comparação considerará:
  - **Densidade Populacional:** Vence a carta com menor valor.
  - **Outras Propriedades:** Vence a carta com maior valor.
- O resultado das comparações será exibido claramente para cada propriedade.

### 📥 Entrada e 📤 Saída de Dados:
- O usuário insere as cartas a serem comparadas.
- O sistema exibe os resultados das comparações, indicando a carta vencedora para cada propriedade.

---

Ao concluir todos os níveis, você terá criado um sistema incial para o jogo Super Trunfo, com funcionalidades de cadastro, cálculo e comparação de propriedades. 

Boa sorte e divirta-se programando!

Equipe de Ensino - MateCheck
-----------------------------------------------------------------------------------------------------------------------------------
Tema 3 - Super Trunfo em c: Nível Aventureiro

Super Trunfo – Comparação de Cidades

Este documento apresenta as instruções de compilação, execução e uso do programa desenvolvido em linguagem C para comparação de atributos entre duas cidades. O sistema utiliza um menu interativo para seleção de critérios.

1. Objetivo

Descrever a estrutura, funcionamento e instruções de operação do programa Super Trunfo – Comparação de Cidades, permitindo que qualquer usuário ou avaliador consiga compilar, executar e compreender o comportamento do software.

2. Escopo

O programa realiza comparação direta entre duas cartas (cidades) por meio de cinco atributos predefinidos. O escopo abrange:

Cálculo interno de densidade demográfica e PIB per capita.

Apresentação de menu interativo para seleção de atributos.

Determinação automática da carta vencedora com base no critério escolhido.

O programa não recebe entrada externa de dados das cartas, pois os valores estão definidos no código-fonte.

3. Requisitos Técnicos

Para compilar e executar o código, é necessário:

Compilador C compatível (GCC, Clang ou equivalente).

Sistema operacional com terminal ou prompt de comando.

Acesso ao arquivo-fonte main.c.

4. Procedimento de Compilação

No diretório onde o código-fonte está localizado, execute o comando:

gcc -o super_trunfo main.c


Esse procedimento gera o executável:

super_trunfo (Linux/macOS)

super_trunfo.exe (Windows)

5. Procedimento de Execução
5.1 Linux / macOS
./super_trunfo

5.2 Windows
super_trunfo.exe

6. Funcionamento do Programa

Ao iniciar, o sistema apresenta um menu para seleção de atributos. Cada opção corresponde a um critério de comparação entre as duas cidades internas.

6.1 Menu
******************** MENU PRINCIPAL **********************
-- Escolha um atributo para comparação entre as cartas: --
__________________________________________________________
1. População (Maior Vence)
2. Área (Maior Vence)
3. PIB (Maior Vence)
4. Pontos Turísticos (Maior Vence)
5. Densidade Demográfica (Menor Vence)
Opção:


O usuário deve digitar um valor inteiro entre 1 e 5.

7. Especificação dos Atributos
7.1 População

Compara o total de habitantes.
Critério: maior valor vence.

7.2 Área (km²)

Compara a área territorial total.
Critério: maior valor vence.

7.3 PIB (em bilhões)

Compara o valor do PIB informado.
Critério: maior valor vence.

7.4 Pontos Turísticos

Compara a quantidade cadastrada de pontos turísticos.
Critério: maior valor vence.

7.5 Densidade Demográfica

Calculada como:

densidade = população / área


Critério: menor valor vence.
O programa calcula essa métrica internamente para cada cidade.

8. Exemplo de Operação
Entrada do usuário:
3

Saída gerada pelo sistema:
O atributo escolhido foi: PIB

DISPUTARAM: Sao_Paulo versus Rio_de_Janeiro
GANHADOR: Vitória de Sao_Paulo!

1 - PIB (em bilhões) de Sao_Paulo: 699.28
2 - PIB (em bilhões) de Rio_de_Janeiro: 300.50

9. Estrutura do Projeto
/seu-repositorio
 ├── main.c
 └── README.md

10. Manutenção e Expansão

O código pode ser expandido para:

Aceitar mais cartas.

Ler dados externos (arquivo ou input do usuário).

Implementar sistema completo de rodadas do jogo Super Trunfo.

Criar modularização com funções separadas por responsabilidade.
