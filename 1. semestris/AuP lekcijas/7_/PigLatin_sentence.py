# No Reuven M.Lerner. Python Workout, Manning Publications, 2020
# Pig Latin
#If the word begins with a vowel (a, e, i, o, or u), then add way to the end of the word. 
#So air becomes airway and eat becomes eatway.
#If the word begins with any other letter, then we take the first letter, 
#put it on the end of the word, and then add ay. 
#Thus, python becomes ythonpay and computer becomes
#omputercay.

# Šifrētā valoda
#Ja vārds sākas ar patskani (a, e, i, o vai u), tad vārda beigās jāpieliek way. 
#Tātad air kļūst par airway un eat kļūst par eatway.
#Ja vārds sākas ar jebkuru citu burtu, tad ņemam pirmo burtu, pieliekam to vārda beigās un
#tad pieliekam ay.
#Tātad python kļūst par ythonpay un
#computer kļūst par omputercay.
sentence = input("Enter a sentence: ")
output = [ ]
for word in sentence.split():
    if word[0] in 'aeiou':
        output.append(f"{word}way")
    else:
        output.append(f"{word[1:]}{word[0]}ay")
print(output)
print(' '.join(output))