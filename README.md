# RGB-LED-AVR-C
- The program is just going to blink a RGB LED different colors. Each color change will be maintained for half a second before going to the next color. This is achieved by utilizing timer 0 and 2. Timer 0 I use Pins D5 and D4 because they are PWM’s, which contain OCR0B and OCR0A. For timer 2 I use Pin B3 and utilizue OCR2A. Setting these PWM pins a specific value will decide the RGB LED color.



- <img width="529" alt="1" src="https://user-images.githubusercontent.com/35685060/36366645-e6e66372-1503-11e8-98d3-abac621a608a.PNG">

- <img width="575" alt="2" src="https://user-images.githubusercontent.com/35685060/36366646-e6fb2fc8-1503-11e8-9261-86d27f698519.PNG">

