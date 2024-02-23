# -*- coding: utf-8 -*-
"""
Created on Thu Feb 22 21:38:42 2024

@author: salva
"""
i=1
resultado1=0
resultado2=0
resultado3=0

n=0
menu=int(input("Numero de sucesión [12-16] : "))

if menu==12:
    print("La sucesión es 1/4,2/9,3/16,4/25,5/36,6/49")
    n=int(input("Escribe hasta que posición quieres ver la sucesión: "))

    while i<=n:
        resultado1=1*i
        resultado2=pow(1+i,2)
        i=i+1
        print(f"{resultado1}/{resultado2},")
        
if menu==13:
    print("La sucesión es 1-1/2,1/2-1/3/,1/3-1/4,1/4-1/5,1/5-1/6")
    n=int(input("Escribe hasta que posición quieres ver la sucesión: "))

    while i<=n:
        resultado1=pow(1,i)
        resultado2=i
        resultado3=i+1
        i=i+1
        print(f"{resultado1}/{resultado2}-{resultado1}/{resultado3},")
        
if menu==14:
    print("La sucesión es 1/3,4/9,9/27,16/81,25/243")
    n=int(input("Escribe hasta que posición quieres ver la sucesión: "))
    while i<=n:
        resultado1=pow(i,2)
        resultado2=pow(3,i)
        i=i+1
        print(f"{resultado1}/{resultado2},")

if menu==15:
    print("La sucesión es 0,-1/2,2/3,-3/4,4/5")
    n=int(input("Escribe hasta que posición quieres ver la sucesión: "))
    while i<=n:
        resultado1=(i-1)*pow(-1,i-1)
        resultado2=(i+1)-1
        i=i+1
        print(f"{resultado1}/{resultado2},")
        
if menu==16:
    print("La sucesión es 3,6,12,24,48,96")
    n=int(input("Escribe hasta que posición quieres ver la sucesión: "))
    while i<=n:
        resultado1=3*pow(2,i-1)
        
        i=i+1
        print(f"{resultado1},")
    
       
        
        
        
    
