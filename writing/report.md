# Report by Jacob Boord, Jacob King, Stephen Cullinan

## Planning, due on January 27th, 2023 by 9:30am

### Timeline

| Timeline  | Tasks |
| ----------- | ----------- |
| Monday Jan 30 |   Gather Materials   |
| Monday Jan 30 |   Begin Wiring   |
| Wednesday Feb 1 |   Finish Initial Wiring, Begin Coding & Housing Construction   |
| Friday Feb 3 |   Finish First Model  |
| Sunday Feb 5 |   Finish Debugging and Testing, Prepare Final Report   |
| Monday Feb 6 |   Finish Entirety of the Project, Prepare Demonstration   |

### Hardware

- Arduino board
- 5 mm LED: Red
- 5 mm LED: Green
- Generic LED
- 2K Resistors
- Cables
- Velcro
- Cardboard
- Mini speaker 

### Tools

- Soldering Iron
- Hot Glue Gun
- Soldering Wire

## Arduino Project

Describe the application you have chosen to develop and provide a motivation for why it is a useful application. Include references of all sources you have used throughout this project (URLs are sufficient).

The application our group decided to create and modify was a lie detector with a playable sound. In order to do so, we relied on two separate public projects on https://www.hackster.io. The first project, which served as the base of the project, was the lie detector. A project from 2016 by Daniel Roumega, the lie detector is a project that exctied the group and inspired us to explore the arduino first. The project can be found at https://www.hackster.io/BuildItDR/arduino-lie-detector-a0b914. Referencing this projet, we noticed that there was no audio alert to a lie, only a simple visual cue with LEDs. In order to play tunes through our speaker modification, we refernced https://www.hackster.io/Rad_Silviu/speaker-with-arduino-be454c. Finally, various YouTube videos on wiring the Arduino and coding in C and C++  helped connect the dots with debugging small issues within the wiring and coding portions of the project.

Overall, the application is useful for being able to take in environmental data through the form of conductivity in the skin and make the agent react. 

## Agent

Explain the characteristics/attributes of your agent, what makes it an agent (within the discussed course content), what makes it rational, what type of an agent it is, and what is its environment task (PEAS).

The agent our group has constructed utilizes environmental data inputs through the finger wrap attachments. The finger wrap attachments are lined with aluminum foil to allow for the connecting wire to maintain a consistent contact with the skin. The idea behind the lie detector is that if one is lying, the skin will have increased persperation. Upon having that increase, the skin becomes more conductive. The agent reacts to this increase by activating a series of yellow and red LEDs and playing a sound through the speaker. If the subject tells the truth, there will be no such spike and show a green (valid) LED.

TODO:
The agent 

PEAS

## Challenges and Learning Experiences

TODO:
Discuss any challenges you have encountered during the work on this lab and  describe what have you learned.

## Ethical Benefits and Implications

TODO:
In this section, drawing on class discussions and readings, answer the following questions

1. What entities, businesses, organizations do you envision developing the type of the application you have chosen to develop?

2. Who are the intended users of this technology?

3. Who is not supposed to use this technology?

4. How can the application developed in this lab cause harm?

5. What solutions could be implemented to avoid the harm or to fix the harm described above?

## Team Work

TODO:
Describe the details of your team working strategy, specifically explain how did you complete this work as a team and describe the specific contributions of each team member.
