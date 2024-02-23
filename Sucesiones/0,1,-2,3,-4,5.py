# -*- coding: utf-8 -*-
"""
Created on Thu Feb 22 21:33:42 2024

@author: salva
"""

print("La sucesión es 0,1,-2,3,-4,5")
n=int(input("Escribe hasta que posición quieres ver la sucesión: "))

i=1

while i<=n:
    resultado=pow(-1,i)*i-pow(-1,i)
    i=i+1
    print(f"{resultado},")
