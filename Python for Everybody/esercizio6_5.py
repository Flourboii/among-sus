# prendi il seguente codice Python contenente una stringa: str ='X-DSPAM-Confidence:0.8475
# Usa find e la segmentazione delle stringhe per estrarre la porzione di stringa dopo
# il carattere “:” e utilizza la funzione float per convertire la stringa estratta in un numero a virgola mobile.
str = 'X-DSPAM-Confidence:0.8475'

nstr = len(str) # conta i caratteri
print(nstr)

mstr = str.find(':') # posizione numeri
print(mstr)

fstr = float(str[19:25]) # estrazione numeri
print(fstr)
