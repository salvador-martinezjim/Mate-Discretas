# -*- coding: utf-8 -*-
"""
Created on Tue Feb 20 22:34:34 2024

@author: salva
"""

print("Numeros perfectos hasta N")
limite=int(input("Escriba un número: "))
n=2

while n<=limite:
    valores=[]

    for i in range(1,n):
        if n % i == 0:
            valores.append(i)
            
    suma=sum(valores)

    if suma==n:
        print(f"{n}")        
    n=n+1        

    
