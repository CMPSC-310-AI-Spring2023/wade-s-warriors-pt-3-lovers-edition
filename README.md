# Lie Detector

## Arduino Project

The application our group decided to create and modify was a lie detector with a playable sound. In order to do so, we relied on two separate public projects on <https://www.hackster.io>. The first project, which served as the base of the project, was the lie detector. A project from 2016 by Daniel Roumega, the lie detector is a project that excited the group and inspired us to explore the arduino first. The project can be found at <https://www.hackster.io/BuildItDR/arduino-lie-detector-a0b914>. Referencing this project, we noticed that there was no audio alert to a lie, only a simple visual cue with LEDs. In order to play tunes through our speaker modification, we referenced <https://www.hackster.io/Rad_Silviu/speaker-with-arduino-be454c>. Finally, various YouTube videos on wiring the Arduino and coding in C and C++  helped connect the dots with debugging small issues within the wiring and coding portions of the project.

Overall, the application is useful for being able to take in environmental data through the form of conductivity in the skin and make the agent react.

## Agent

The agent our group has constructed utilizes environmental data inputs through the finger wrap attachments. The finger wrap attachments are lined with aluminum foil to allow for the connecting wire to maintain a consistent contact with the skin. The idea behind the lie detector is that if one is lying, the skin will have increased perspiration. Upon having that increase, the skin becomes more conductive. The agent reacts to this increase by activating a series of yellow and red LEDs and playing a sound through the speaker. If the subject tells the truth, there will be no such spike and show a green (valid) LED.

- The agent is only capable of partial observations as its observations are limited to the conductivity of the fingers attached to the scanner.
- The agent's decisions are deterministic as there are three levels of results, green (truth), yellow (possible lie), red (lie).
- The agent functions episodically, as the results from one test do not impact future tests.
- The agent functions dynamically, as the environment (skin conductivity) can be constantly changing, resulting in new decisions by the agent, which it is actively deliberating.
- The environment is continuous, as stated above, it is constantly being changed.
- The agent functions as a Single-Agent. 

- Performance Measures: Accuracy of Detecting Lie
- Environment: Skin conductivity of the person being interrogated, Temperature of room (could increase or decrease sweating)
- Actuators: Speaker, Lights, Graph
- Sensors: Finger Attachments
