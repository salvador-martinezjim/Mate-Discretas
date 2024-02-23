# -*- coding: utf-8 -*-
"""
Created on Thu Feb 22 21:22:38 2024

@author: salva
"""

print("La sucesión es -1,1,-1,1")
n=int(input("Escribe hasta que posición quieres ver la sucesión: "))
i=1
while i<=n:
    resultado=pow(-1,i)
    print(f"{resultado},")
    i=i+1
    


