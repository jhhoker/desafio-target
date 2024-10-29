string = str(input("Digite uma frase: "))

ocurrences = string.lower().count("a")
if(ocurrences < 1):
    print("\nNão existe nenhuma letra A na frase.") 
else: 
    print(f"\nExiste {ocurrences} ocorrências da letra A na frase.")