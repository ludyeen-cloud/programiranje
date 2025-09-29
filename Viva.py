# Izbornik za kalkulator
print("--------------------")
print("Izbornik za kalkulator")
print("-------------------")
print("1. Izračun napona struje")
print("2. Izračun otpora struje")
print("3. Izračun jakosti struje")
print("--------------------")
opcija =int(input(print("izaberite operaciju(1/2/3):")))
#Struktura grananja
if opcija == 1:
    print("Izračun napona struje ")
    Jakost=int(input("Upiši jakost struje:"))
    Otpor=int(input("Upiši otpor:"))
    Napon=Jakost*Otpor
    print(f"Napon je: {Napon}V")
elif opcija == 2:
    print("Izračun optora struje")
    Napon=int(Input("Upiši napon:"))
    Jakost=int(input("Upiši jakost struje:"))
    Otpor= Napon/Jakost
    printrint(f"Otpor je: {Otpor}ohm")
elif opcija == 3:
    print("Izračun jakosti struje ")
    Napon=int(input("Upiši napon:"))
    Otpor=int(input("Upiši otpor:"))
    Jakost=Napon/Otpor
    print(f"Jakost je: {Jakost} A")
elif opcija == 0:
    print("Ti si budala,LOLLLLL")
elif opcija == 4:
    print("Izračun otpora u serijskom spoju")
    Otpornik1=int(input("Upiši otpor prvog otpornika"))
    Otpornik2=int(input("Upiši otpor drugog otpornika"))
    Otpornik12=Otpornik1+Otpornik2
    print(f"Ukupan otpor je:{Otpornik12}")
elif opcija == 5:
    print("Izračun otpora u paralernom spoju")
    Otpornik1=int(input("Upiši otpor prvog otpornika"))
    Otpornik2=int(input("Upiši otpor drugog otpornika"))
    Otpornik12=1/Otpornik1+1/Otpornik2
    print(f"Ukupan otpor je:{Otpornik12}")
else:
    print("Pogrešan unos")

     

#Izračun napona struje
jakost=int(input("Upisi jakost"))
Otpor=int(input("Upisi otpor"))
Napon=jakost*Otpor
print("Napon je",Napon)

