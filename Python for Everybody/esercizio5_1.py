# Scrivi un programma che legga ripetutamente i numeri fino a quando l’utente non digiti “finito”. Una volta che viene digitato “finito”, dovrà essere visualizzato il totale, il conteggio e la media dei numeri. 
# Se l’utente dovesse digitare qualcosa di diverso da un numero, occorrerà rilevare l’errore usando try e except, visualizzare un messaggio di errore e passare al numero successivo.
numero = None
conta = 0
somma = 0
media = 0
while True: #loop
    numero = input("numero ") #input numero
    if numero == "Done" or numero == "done": # verifica done
        break
    try: # verifica carattere
        float(numero)
    except:
        print("Invalid input")
        continue
    numero = float(numero) # float numero
    conta = float(conta + 1) # conta
    somma = float(somma + numero) # somma
    media = float(somma / conta) # media
print(int(conta), int(somma), media) # printa risultati
