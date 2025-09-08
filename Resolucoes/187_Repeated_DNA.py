class HashTableDNA:
    def __init__(self, tamanho=10007):
        self.tamanho = tamanho
        self.tabela = [[] for _ in range(tamanho)]
    
    def _hash(self, sequencia):
        hash_val = 0
        for char in sequencia:
            hash_val = hash_val * 31 + ord(char)
        return hash_val % self.tamanho
    

    def adicionar(self, sequencia):
        indice = self._hash(sequencia)
        for seq, count in self.tabela[indice]:
            if seq == sequencia:
                self.tabela[indice][self.tabela[indice].index((seq, count))] = (seq, count + 1)
                return count + 1
        self.tabela[indice].append((sequencia, 1))
        return 1
    
    def obter_contagem(self, sequencia):
        indice = self._hash(sequencia)
        for seq, count in self.tabela[indice]:
            if seq == sequencia:
                return count
        return 0

class Solution:
    def findRepeatedDnaSequences(self, s: str) -> list[str]:
        if len(s) < 10:
            return []
        
        tabela_hash = HashTableDNA()
        resultado = []
        sequencias_adicionadas = set()
        
        for i in range(len(s) - 9):
            subsequencia = s[i:i+10]
            contagem = tabela_hash.adicionar(subsequencia)
            
            if contagem == 2 and subsequencia not in sequencias_adicionadas:
                resultado.append(subsequencia)
                sequencias_adicionadas.add(subsequencia)
        
        return resultado