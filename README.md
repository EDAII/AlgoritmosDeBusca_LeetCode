# Algoritmos de Busca - Trabalho 1 
## Alunos  
| Matrícula | Nome |  
|-----------------------|---------------------|  
| 23/1012129 | Gabriel Lopes de Amorim |  
| 21/1031593 | Andre Lopes de Sousa |  
## Descrição do projeto
Trabalho 1 - A dupla realizou a resolução de questões da plataforma LeetCode pelos integrantes do grupo com o objetivo de demonstrar e aplicar o conhecimento adquirido durante as aulas sobre (Algoritmos de Busca) da disciplina de Estrutura de Dados 2.
## Questões

|Questão | Dificuldade |
| -- | -- |
| [878. Nth Magical Number](https://leetcode.com/problems/nth-magical-number/description/?envType=problem-list-v2&envId=binary-search)| Difícil |


## Guia de instalação
Os Scripts Python utilizados para a resolução dos desafios estão na pasta Resolucoes.

## Capturas de tela
### [878. Nth Magical Number](https://leetcode.com/problems/nth-magical-number/description/?envType=problem-list-v2&envId=binary-search) 

Esse desafio consiste em encontrar o **N-ésimo número mágico**, onde um número é considerado "mágico" se for divisível por `a` ou `b`. O problema apresenta uma complexidade significativa devido ao tamanho potencial de N (até 10^9) e a necessidade de retornar o resultado módulo 10^9 + 7.

![Print da Resolução 878 Nth Magical Number](./assets/878.png)  
## Conclusões
Para o **Desafio 878**:
O algoritmo de busca binária se mostrou extremamente eficiente para este problema, transformando uma solução que seria O(n) em força bruta (impraticável para n até 10^9) em uma solução O(log n). 

**Pontos Fortes:**
- Complexidade logarítmica permite resolver casos com N muito grande (até 10^9)
- Uso inteligente do Princípio da Inclusão-Exclusão para contar números eficientemente
- Solução elegante que evita gerar todos os números mágicos

**Limitações:**
- Requer compreensão do MMC e do Princípio da Inclusão-Exclusão
- A implementação precisa lidar com overflow potencial (por isso o módulo 10^9 + 7)
- Não é intuitiva de primeira vista, exigindo análise matemática do problema

Esta questão demonstra perfeitamente como a busca binária pode ser aplicada em problemas não-óbvios, onde não estamos buscando em um array, mas sim em um espaço matemático abstrato.

--- 


## Referências
- [Binary Search - GeeksforGeeks](https://www.geeksforgeeks.org/binary-search/)
