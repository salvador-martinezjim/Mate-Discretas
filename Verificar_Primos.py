# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
Programa que solicita un numero y dice si es primo o no
"""
print('Verificar si un número es primo')
numero=int(input("Dame un número: "))
contador=0

for i in range(1, numero+1):
    if numero % i == 0:
        contador+=1

if contador>2:
    print(f"{numero} no es primo")
else:
    print(f"{numero} si es primo")        
