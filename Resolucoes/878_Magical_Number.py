import math

class Solution:
    def nthMagicalNumber(self, n: int, a: int, b: int) -> int:
        MOD = 10**9 + 7
        
        def mmc(x, y):
            return x * y // math.gcd(x, y)
        
        def contar_magicos(x):
            return x // a + x // b - x // mmc(a, b)
        
        esquerda, direita = 1, n * min(a, b)
        
        while esquerda < direita:
            meio = (esquerda + direita) // 2
            if contar_magicos(meio) < n:
                esquerda = meio + 1
            else:
                direita = meio
        
        return esquerda % MOD