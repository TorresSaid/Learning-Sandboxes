numeros = [199, 25, 136, 45600, 789]    #List
for numero in numeros:
    if numero % 2 == 0:
        print(f"{numero} es par")
    else:
        print(f"{numero} es impar")
print(f"lista de elementos: {len(numeros)}")