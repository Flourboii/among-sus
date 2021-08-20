# Riscrivi lo script sul calcolo della retribuzione utilizzando try e except in modo che il programma gestisca input non-numerici in maniera elegante visualizzando un messaggio prima di uscire dal programma. Di seguito vengono mostrate due esecuzioni del programma:
hours = input("Enter Hours: ") # input ore
rate = input("Enter Rate: ") # input rate per ora
pay = None # variabile pay
try: # try
    pay = hours * rate # paga calcolo
except: # except
    print("Error, please enter a nueric input") # prin errore
