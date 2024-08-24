import pyttsx3
#python text to speech version 3
engine=pyttsx3.init()




def speak(x):
    engine.say(x)
    engine.runAndWait()

import gtts
import playsound
import os

def speak_female(x):
    sound=gtts.gTTS(x, lang="hi")
    sound.save("sound.mp3")
    playsound.playsound("sound.mp3")
    os.remove("sound.mp3")


speak("hii, how are you?")
speak_female("hii, how are you?")