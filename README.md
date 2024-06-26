# Flashcards in C++

<img src="https://schoolhabits.com/wp-content/uploads/2017/01/good-flashcard-scaled-e1639491350119-1024x768.jpeg" style="width:512px;height:384px;">

This project aims to recreate a simple yet effective flashcard memorization method. This classic technique involves using blank cards with information written on each side, providing an efficient way to learn and memorize various topics such as vocabulary, country capitals, or any other subject of interest. With this project, you can easily create a comprehensive deck of flashcards, enabling self-guided learning and personalized study sessions.

## How it Works

Each flashcard in this project is represented by a single line in the following format:

```plaintext
face1 | face2
```

The two faces represent the content you want to memorize on each side of the flashcard.

## Getting Started

To launch the program, you need to provide the path to a `.fc` file, which corresponds to a deck of flashcards. Follow these steps:

1. Navigate to the project directory.
2. Open a terminal and run the following commands:

```bash
make
./flashcard examples/europe_capitals.fc
```

The program reads the content of your specified deck until it encounters an empty line, allowing you to split your file and learn step by step. This feature provides flexibility in organizing your study sessions.

Feel free to explore the examples provided in the `examples` directory to kickstart your flashcard memorization :)

If you encounter any issues or have suggestions for improvement, please feel free to contribute to the project.
