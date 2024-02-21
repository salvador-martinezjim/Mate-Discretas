# -*- coding: utf-8 -*-
"""
Created on Tue Feb 20 22:05:44 2024

@author: salva
"""
print("Verificar si un número es perecto")
numero=int(input("Escriba un número: "))

valores=[]

for i in range(1,numero):
    if numero % i == 0:
        valores.append(i)
        
suma=sum(valores)

if suma==numero:
    print(f"{numero} es un numero perfecto por que si sumas sus divisores: {valores}, nos da {numero}")
   
else:
    print(f"{numero } no es un numero perfecto")
   
            
    
