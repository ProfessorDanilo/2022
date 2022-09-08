import paho.mqtt.client as mqtt
import time
from random import *
while True:
    mqttc = mqtt.Client()
    mqttc.connect("mqtt.eclipseprojects.io", 1883)
    teste = str(int(random()*10+20))
    mqttc.publish("fesdan/temperatura", teste)
    mqttc.loop(2)
    time.sleep(3)