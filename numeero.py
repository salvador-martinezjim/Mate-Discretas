# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.

Escribe un programa que genere un numero aleatorio
"""
import random

numero=random.randrange(10)

while True:
    valor=int(input("Adivina el número: "))
    print(numero)
    if valor == numero:
        print('Adivinaste')
        break
    


