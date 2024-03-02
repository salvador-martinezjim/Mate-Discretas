# -*- coding: utf-8 -*-
"""
Created on Mon Feb 26 20:03:44 2024
     Ver numero de antepasados
@author: salva
"""

def ancestors(base,g):
    if g==0:
        return 1
    else:
        return base **g
    


generation=int(input("Insert a number of generation: "))
base=2
result=ancestors(base,generation)
print(f"In the  {generation} generation you have {result} ancestors")

