# Riscrivi lo script del calcolo della retribuzione per attribuire ad un dipendente una maggiorazione oraria di 1,5 volte, per le ore di lavoro straordinario fatte oltre le 40.
hours = float(input("Enter Hours: ")) # input ore
rate = float(input("Enter Rate: ")) # input rate per ora
pay = None # variabile pay
if hours > 40 : # condizione 
    pay = hours * rate * 1.5 # bonus di 1.5
else : pay = hours * rate  # paga calcolo
print("Pay: ", pay) # print paga
# madonna bagassa la consegna non si capisce
