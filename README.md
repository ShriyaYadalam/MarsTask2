MarsTask2
Mars Task 2 - Shriya Yadalam - control system

Thought process - 
In this project, we have been given a DC motor which we connect to the Arduino through an MD10C motor driver which we can use to control the speed and direction of the motor. We have also been provided an ultrasonic sensor which we use to detect the distance of the object from the sensor and based on the distance, we make the motor rotate with a particular PWM speed in a particular direction. 
We can use this setup in several real-life applications-
1)In the Mars rover, if an object is detected, a motor can  be used to change the direction of the rover so that it can avoid collision.  
2)This setup can be used in wheelchairs, which can detect an obstacle and change its direction- accordingly. 
3)Curtains which open automatically as a person enters a room. 
4)Doors which open automatically on sensing a person's presence.

Steps - 
1)The motor driver has 4 screw pins on one side of which two are connected to the power source and the other two are connected to the motor.
2)The motor driver also has 3 pins on the other side, one is for direction, one is for PWM (speed) and the third one is connected to ground. We connect these 3 pins to the necessary pinso on the Arduino. The direction pin is designated as digital Output. 
3)Now, the ultrasonic sensor is connected to the Arduino board through its 4 pins. Vcc is connected to the power supply of 5V, the ground pin is grounded on the Arduino. The trig pin is connected to a Output pin and the Echo pin is connected to an input pin. 
4)We use if-else statements to make the motor move in a particular direction, either clockwise or anticlockwise based on the distance of the object read by the ultrasonic sensor. 

Resources -
allaboutcircuits.com
tutorialspoint.com 
