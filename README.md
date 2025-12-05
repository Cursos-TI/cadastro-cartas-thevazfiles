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

Super Trunfo em C – Comparação de Cartas de Países

TEMA 3 Nível Aventureiro 

Documentação do Projeto – Nível Intermediário

1. Descrição Geral

Este projeto implementa uma versão simplificada do jogo Super Trunfo, permitindo comparar duas cartas de países com base em atributos definidos no próprio código. O programa utiliza um menu interativo baseado na estrutura switch e lógica de decisão com condicionais if-else para determinar o vencedor em cada comparação.

O foco deste desafio é o desenvolvimento da lógica de comparação, da estrutura do menu e do fluxo interativo, conforme orientado no módulo.

2. Objetivo do Sistema

O programa permite ao jogador escolher qual atributo deseja utilizar para comparar duas cartas previamente cadastradas. Após a escolha, o sistema exibe:

O atributo selecionado.

Os nomes dos países.

Os valores envolvidos.

O resultado da disputa (qual carta venceu ou se houve empate).

3. Atributos Disponíveis para Comparação

Os atributos implementados são:

População (int)

Área (float)

PIB (float)

Pontos Turísticos (int)

Densidade Demográfica (float) – calculada internamente

Nome do país – exibido somente como informação, não é utilizado para desempate

Regras de Comparação

Para População, Área, PIB e Pontos Turísticos:

vence a carta com o maior valor.

Para Densidade Demográfica:

vence a carta com o menor valor.

Em qualquer atributo:

valores iguais resultam em empate.

4. Estrutura do Menu Interativo

O programa exibe o menu abaixo para o usuário:

******************** MENU PRINCIPAL **********************

-- Escolha um atributo para comparação entre as cartas: --

__________________________________________________________
1. População (Maior vence)
2. Área (Maior vence)
3. PIB (Maior vence)
4. Pontos Turísticos (Maior vence)
5. Densidade Demográfica (Menor vence)
Opção:


A lógica de controle utiliza:

switch para tratar a opção escolhida.

if-else (incluindo estruturas aninhadas) para determinar:

O vencedor,

Os valores a serem exibidos,

Casos de empate.

5. Requisitos Funcionais Atendidos

Menu Interativo: Implementado com switch, com opções claras ao usuário.

Comparação de Atributos: Lógica por atributo, seguindo regras definidas.

Cálculo de Densidade Demográfica: Realizado automaticamente.

Exibição de Resultado: Inclui nome das cartas, valores e vencedor ou empate.

Utilização de Condicionais: Estruturas if-else e aninhamentos implementados.

6. Requisitos Não Funcionais Atendidos

Usabilidade:

O menu é simples e objetivo, com mensagens explicativas para cada etapa.

Performance:

Resposta imediata; não depende de entrada externa além da escolha do atributo.

Manutenibilidade:

Código organizado, comentado e com variáveis nomeadas de forma clara.

A alteração dos valores das cartas é simples, bastando modificar as variáveis no início do arquivo.

Segurança:

Há tratamento de opção inválida via default no switch.

7. Compilação do Programa

Usando GCC

No diretório onde o arquivo main.c se encontra:

gcc -o super_trunfo main.c

Isso gerará um executável:

super_trunfo (Linux/macOS)

super_trunfo.exe (Windows)

8. Execução do Programa
  
Linux/macOS

./super_trunfo

Windows

super_trunfo.exe

9. Exemplo de Uso do Menu

Entrada do usuário:

4

Saída esperada (exemplo genérico):

O atributo escolhido foi: Pontos Turísticos

DISPUTARAM: <Pais 1> versus <Pais 2>
GANHADOR: Vitória de <Pais vencedor>

1 - Pontos Turísticos de <Pais 1>: X
2 - Pontos Turísticos de <Pais 2>: Y


(A saída varia conforme os valores definidos no código.)

10. Estrutura do Projeto
/https://github.com/Cursos-TI/cadastro-cartas-thevazfiles
 ├── main.c
 └── README.md

11. Como Alterar os Valores das Cartas

Os atributos das duas cartas estão definidos no início do código-fonte.
Para alterá-los, modifique as variáveis correspondentes:

char nome_pais1[] = "...";
int populacao1 = ...;
float area1 = ...;
float pib1_input = ...;
int pontos_turisticos1 = ...;

O programa continuará funcionando normalmente, independentemente dos valores escolhidos.
---------------------------------------------------------------------------------------------------------------------------------
