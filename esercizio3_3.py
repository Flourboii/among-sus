# Scrivi un programma per richiedere un valore compreso tra 0.0 e 1.0. Se non è compreso nell’intervallo specificato, visualizza un messaggio di errore. 
# Se è compreso tra 0,0 e 1,0, visualizza un giudizio utilizzando la seguente tabella:
# Score    Grade
# >= 0.9    A
# >= 0.8    B
# >= 0.7    C
# >= 0.6    D
# < 0.6     F
score = input("Enter Score: ")
try:
    score = float(score)
    if score >= 1.0 :
        print("Bad Score")
    else:
        if 1.0 > score >= 0.9:
            print("A")
        else:
            if 0.9 > score >= 0.8:
                print("B")
            else:
                if 0.8 > score >= 0.7:
                    print("C")
                else:
                    if 0.7 > score >= 0.6:
                        print("D")
                    else:
                        if score < 0.6:
                            print("F")
except:
    print("Bad Score")
