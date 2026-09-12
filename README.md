# Arduino Electronic Dice

This project is a simple electronic dice made with Arduino Uno. 
 
When the push button is pressed, the Arduino generates a random number between 1 and 6. The generated number is represented by the number of LEDs that turn on. For instance, if the generated number is 4, four LEDs light up.

## Components

- Arduino Uno
- 6 LEDs
- Push button
- Resistors
- Breadboard
- Jumper wires

## How It Works

1. The program waits for the push button to be pressed.
2. All LEDs are turned off before generating a new result.
3. Arduino generates a random number between 1 and 6 using 'random( )'.
4. The generated number is stored in the 'dice' variable.
5. A 'for' loop turns on the same number of LEDs as the generated number.
6. The program waits until the button is released before accepting another input.

## Concepts Used

- Digital input and output
- 'INPUT_PULLUP'
- Arrays
- 'for' loops
- Random number generation with 'random( )'
- Push-button control
- 'while' loop

## Hardware Setup
The circuit was built using an Arduino Uno, six LEDs and a push button on a breadboard.

## Demo
The video below the electronic dice in action. Each button press generates a random number from 1 to 6, and the result is displayed by lighting up the corresponding number of LEDs.



https://github.com/user-attachments/assets/28494932-a95c-407e-9fce-2c85d9a163f1



## What I Learned
This project helped me practice using arrays and loops to control multiple LEDs. I also learned how to generate random values and use a push button to trigger an action in an Arduino program.








