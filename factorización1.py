# -*- coding: utf-8 -*-
"""
Created on Tue Feb 13 19:07:37 2024

@author: salva
Factorización de un numero
"""
numero=int(input("Dame un numero a factorizar: "))
valores=[]
divisor=2

while numero > 1:
    if numero % divisor == 0:
        numero=numero/divisor
        valores.append(divisor)
    else:
        divisor+=1
  
    
for elemento in valores:
    print(elemento)    

