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

- Soldering Iron
- Hot Glue Gun
- Soldering Wire

## Arduino Project

Describe the application you have chosen to develop and provide a motivation for why it is a useful application. Include references of all sources you have used throughout this project (URLs are sufficient).

The application our group decided to create and modify was a lie detector with a playable sound. In order to do so, we relied on two separate public projects on <https://www.hackster.io>. The first project, which served as the base of the project, was the lie detector. A project from 2016 by Daniel Roumega, the lie detector is a project that excited the group and inspired us to explore the arduino first. The project can be found at <https://www.hackster.io/BuildItDR/arduino-lie-detector-a0b914>. Referencing this project, we noticed that there was no audio alert to a lie, only a simple visual cue with LEDs. In order to play tunes through our speaker modification, we referenced <https://www.hackster.io/Rad_Silviu/speaker-with-arduino-be454c>. Finally, various YouTube videos on wiring the Arduino and coding in C and C++  helped connect the dots with debugging small issues within the wiring and coding portions of the project.

Overall, the application is useful for being able to take in environmental data through the form of conductivity in the skin and make the agent react.

## Agent

Explain the characteristics/attributes of your agent, what makes it an agent (within the discussed course content), what makes it rational, what type of an agent it is, and what is its environment task (PEAS).

The agent our group has constructed utilizes environmental data inputs through the finger wrap attachments. The finger wrap attachments are lined with aluminum foil to allow for the connecting wire to maintain a consistent contact with the skin. The idea behind the lie detector is that if one is lying, the skin will have increased perspiration. Upon having that increase, the skin becomes more conductive. The agent reacts to this increase by activating a series of yellow and red LEDs and playing a sound through the speaker. If the subject tells the truth, there will be no such spike and show a green (valid) LED.

The agent is only capable of partial observations as its observations are limited to the conductivity of the fingers attached to the scanner.
The agent's decisions are deterministic as there are three levels of results, green (truth), yellow (possible lie), red (lie).
The agent functions episodically, as the results from one test do not impact future tests.
The agent functions dynamically, as the environment (skin conductivity) can be constantly changing, resulting in new decisions by the agent, which it is actively deliberating.
The environment is continuous, as stated above, it is constantly being changed.
The agent functions as a Single-Agent. 

Performance Measures: Accuracy of Detecting Lie
Environment: Skin conductivity of the person being interrogated, Temperature of room (could increase or decrease sweating)
Actuators: Speaker, Lights, Graph
Sensors: Finger Attachments

## Challenges and Learning Experiences

Discuss any challenges you have encountered during the work on this lab and  describe what have you learned.

Our group struggled at first to collect ideas for a functional agent that reads the environment and reacts to a given scenario. After spending a long time mulling various ideas, we decided to move forward with our own rendition of a lie detector that combines the ideas of previous creators along with our own twist.

After this decision, we had to overcome two major challenges: we don't know C or C++ and have never worked with Arduino. This posed a major threat to our ability to adapt the projects to make it our own. In order to overcome this, we leveraged knowledge of other programming classes along with relying on YouTube and other open source projects in order to piece together the code and understand circuiting with Arduino. The schematics were fairly straightforward; however, we experienced problems with understanding the LEDs on our bread board. Through much trial and error, we were able to overcome these struggles and move forward with finishing the project. This only set us back about two days on our initial timeline.

## Ethical Benefits and Implications

In this section, drawing on class discussions and readings, answer the following questions

1. What entities, businesses, organizations do you envision developing the type of the application you have chosen to develop?

Seeing as though this technology is already developed along with already in use, polygraphs are mainly implemented and developed by law enforcement agencies and their independent contractors.

2. Who are the intended users of this technology?

Given the project is building on an already utilized technology, the current users are mainly law enforcement agencies. Law enforcement agencies utilize the technology to interview suspects or witnesses in crimes to understand what happened. It has been used in the court of law as well when prosecutors or defenders produce evidence for or against the defendant in a trial. Overall, there has been much controversy over the efficacy of lie detector technology.

Professionals trained with polygraphs should be the main users of this technology in order to minimize the ability to have lowered levels of error in the interpretation of the data.

3. Who is not supposed to use this technology?

The technology is not intended for those looking to abuse the lie detector. As normal polygraphs are deemed ineffective on a broader scale, if they are used in daily life, they can be abused for personal gain. For example, an employer may want to polygraph workers to see if they are doing all the work they can or a school teacher may want to use it to interview a group of kids that were suspected of cheating on a test. In doing so, these users are going against what a polygraph should be used for. The only intention for this technology should be done under professional training and extenuating circumstances like that of a major crime.

A prime example of this can be found on a Jimmy Fallon skit <https://www.youtube.com/watch?v=KPgpRw9tiuM> where they use it on little kids. While this is for a skit, these children are being subject to an irresponsible use of the technology. Although it is a fake polygraph being used, the children believe that it is real.

4. How can the application developed in this lab cause harm?

If abused, like previously mentioned, or the results are simply misinterpreted, then subjects could be deemed as liars when in reality they could be telling the truth. Utilizing skin conductivity, the technology is able to pick up on changes on the skin.

If these results are then used against a subject in an unjust manner, it could lead to severe consequences in their lives down the road. As for the kids previously mentioned, this could lead to trauma, etc. So while the technology can be seen as innovative and fun to play around with, if it is abused, it can lead to personal damages to the subject.

5. What solutions could be implemented to avoid the harm or to fix the harm described above?

In order to avoid the technology falling into the wrong hands, companies producing the technology need to ensure that they are only selling to a select population i.e. only law enforcement. Furthermore, the technology should be accompanied with trainers to train specialists in the field of conducting out the tests along with interpreting the data. This will help reduce errors in the human analysis of the data.

As for skin conductivity, this is a strong measure within itself. There, however, is possibly better ways to measure when subjects are lying. This would be a great segment into deeper research and learning.

## Team Work

Describe the details of your team working strategy, specifically explain how did you complete this work as a team and describe the specific contributions of each team member.

Our team worked well together, with each person understanding their roles. We worked mainly through the strengths of each individual to meet the time constraint on the given project. Jacob King was the main programmer, as he had the most understanding of manipulating the code through C and C++. Although no previous background information, he was able to learn quickly through lots of manipulation while moving things around with our Arduino. Stephen and Jacob Boord worked mainly with wiring and construction of the Agent and its housing. Given our backgrounds in working with circuits in previous experiences. Working this way, we were able to go from zero knowledge on Arduino and C or C++ to having a fully furnished project. We also collaborated on all written portions of the report.
