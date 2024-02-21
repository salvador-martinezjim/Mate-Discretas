# -*- coding: utf-8 -*-
"""
Created on Tue Feb 20 22:56:26 2024

@author: salva
"""

print("Verificar si dos numeros son amigos")
num1=int(input("Escriba un número: "))
num2=int(input("Escriba otro número: "))


div_Primero=[]
div_Segundo=[]

for i in range(1,num1):
    if num1 % i == 0:
        div_Primero.append(i)

for i in range(1,num2):
    if num2 % i == 0:
        div_Segundo.append(i)        
        
suma1=sum(div_Primero)
suma2=sum(div_Segundo)

if suma1==num2 and suma2==num1:
    print(f"{num1} y {num2} son amigos")
   
else:
    print(f"{num1} y {num2} no son amigos")