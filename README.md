# FLASH CARDS C++

<img src="https://schoolhabits.com/wp-content/uploads/2017/01/good-flashcard-scaled-e1639491350119-1024x768.jpeg" style="width:512px;height:384px;">

## Purpose of the project

### This project is about rebuilding a simple flashcard memorization method project.
This method consists in using simple blank cards to write things you want to memorize on both faces. It is really efficient to learn vocabulary, country capitals... (basically anything you want). So, you can have a full deck with a lot of flashcards, learn easily and study anything you want by yourself.

In this project, each flashcard corresponds in one line :\
`face1 | face2`

To be launched, the program need a path to a .fc file. The files corresponds to a deck.
```
make && ./flashcard examples/europe_capitals.fc
```
This program will stop reading your deck after an empty line. So you can split your file and learn step by step.
