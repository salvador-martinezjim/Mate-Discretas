# -*- coding: utf-8 -*-
"""
Created on Tue Feb 13 10:53:34 2024

@author: zS23017376
escribe un programa que indique si un numero dado es primo
"""

numero= int(input("Da un número: "))


for i in range(2, numero // 2 + 1):
    if(numero % i == 0):
        primo = False
        break
if primo:
    print(f"El numero {numero} es primo")
else:
    print(f"El numero {numero} no es primo")    
    
    

