# self made excercise
# crea un codece dove tu inserisci una parola e tramite un loop conti qual'è la posizione di un carattere

parola = input('inserisci parola: ')
conta = 0
while True:
    carattere = parola[conta]
    conta = conta + 1
    print(carattere, conta)
    if conta == len(parola):
        break
    
