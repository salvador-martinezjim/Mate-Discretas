# -*- coding: utf-8 -*-
"""
Created on Tue Feb 20 23:07:51 2024

@author: salva
"""

def calcular_coeficiente_binomial(n, k):
    
    if k == 0 or k == n:
        return 1
    else:
        return calcular_coeficiente_binomial(n - 1, k - 1) + calcular_coeficiente_binomial(n - 1, k)

def imprimir_triangulo_pascal(n):
   
    for linea in range(n):
        for i in range(linea + 1):
            coeficiente = calcular_coeficiente_binomial(linea, i)
            print(coeficiente, end=" ")
        print()


N = int(input("Ingrese el número de líneas para el Triángulo de Pascal: "))


imprimir_triangulo_pascal(N)
