# -*- coding: utf-8 -*-
"""
Created on Fri Feb 16 12:28:24 2024

@author: zS23017376
"""
numero1=int(input("Dame un número: "))
numero2=int(input("Dame Otro numero: "))
r=1
mcd=0

while r!=0:
    r=numero1 % numero2
    if r==0:
        mcd=numero2
    else:
        numero1=numero2
        numero2=r
print(f"El MCD es {mcd}")        
        