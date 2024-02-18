# -*- coding: utf-8 -*-
"""
Created on Tue Feb 13 18:04:39 2024

@author: salva
Imprimir todos los numeros primos hasta N numeros
"""
primos = []
numero_Limite = int(input("Dame un numero para saber cuantos numeros primos hay: "))

numero = 2  # Comenzamos desde el primer número primo
total=0
while numero < numero_Limite:
    divisores = 0
    for i in range(1, numero + 1):
        if numero % i == 0:
            divisores += 1
    if divisores == 2: 
        primos.append(numero)
        total+=1
    numero += 1

for elemento in primos:
    print(elemento)
    
print(f'Estos fueron todos los números primos hasta {numero_Limite}')    
print(f'En total fueron {total} números')
    
  

