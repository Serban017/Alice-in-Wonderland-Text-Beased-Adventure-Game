#include <iostream>
#include <conio.h>

int main() {

    std::cout << "It has indeed been a strange day. You fell down a rabbit hole, encountered a bizarre tea party, and had many other absurd adventures.\n";
    std::cout << "But now, you are summoned to some sort of trial, invited by a Gryphon.\n";
    std::cout << "The King and Queen of Hearts are seated on their thrones as you arrive, with a large crowd gathered around them - all sorts of birds and small animals, as well as the entire deck of cards.\n";
    std::cout << "The White Rabbit stands next to the King, with a trumpet in one hand and a scroll in the other.\n";
    std::cout << "\n";
    std::cout << "     \\\\\n";
    std::cout << "      \\\\_\n";
    std::cout << "      ( _\\Dn==(\n";
    std::cout << "      / \\__|\n";
    std::cout << "     / _/`\"`\n";
    std::cout << "    {\\  )_\n";
    std::cout << "     `\"\"\"`\n";

    std::cout << "\n";
    std::cout << "In the middle of the court is a table with a large plate of tarts on it. They look very good, making you feel quite hungry.\n";
    std::cout << "You see twelve jurors scribbling away confusedly on some slates. You wonder how they have anything to write before the trial has even started.\n";
    std::cout << "*      *      *\n";
    std::cout << "What are you going to do?\n";

    char choice1 = 'k';

    for (int i = 0; i < 3 && choice1 != 'A' && choice1 != 'B' && choice1 != 'C'; i++) {

        std::cout << "Press A if you ask the Gryphon next to you what the jurors are doing.\n";
        std::cout << "Press B if you steal a tart.\n";
        std::cout << "Press C if you wait for the trial to start.\n";
        std::cin >> choice1;

    }

    switch (choice1) {

    case 'A':
        std::cout << "The Gryphon explains that the jurors are writing their names down for fear they will forget them by the end of the trial.\n";
        std::cout << "'What nonsense!' You say aloud, but you are interrupted.\n";
        std::cout << "'SILENCE IN THE COURT!' Screams the White Rabbit. The King puts on his glasses and nervously looks around to see who was speaking.\n";
        std::cout << "You manage to keep quiet, and the King doesn't notice you.\n";
        break;

    case 'B':
        std::cout << "As soon as you lay a hand on a tempting tart, you hear a voice that fills you with dread.\n";
        std::cout << "'You did it,' The Queen of Hearts yells.\n";
        std::cout << "'What did I do?' you ask in surprise.\n";
        std::cout << "'She stole the tarts! Thief! OFF WITH HER HEAD!' The Queen points at you. Her face gets redder as her voice grows louder.\n";
        std::cout << "Several cards dressed as guards escort you to be executed.\n";
        std::cout << "Just as your head is placed on the block, you notice a large grin in the tree above you.\n";
        std::cout << "THE END\n";
        _getch();
        return 0;

    case 'C':
        std::cout << "The court begins to settle down.\n";
        break;

    default:
        std::cout << "Sorry, you didn't enter a valid option.\n";
        std::cout << "Goodbye.\n";
        _getch();
        return 0;

    }

    std::cout << "'Herald, read the accusation!' The King shouts.\n";
    std::cout << "At this command, the rabbit blows three times on the trumpet, then unrolls the scroll and reads as follows:\n";
    std::cout << "\n";
    std::cout << "The Queen of Hearts, she made some tarts,\n";
    std::cout << "    All on a summer's day:\n";
    std::cout << "The Knave of Hearts, he stole those tarts\n";
    std::cout << "    And took them quite away!'\n";
    std::cout << "\n";
    std::cout << "'Prepare your verdict,' says the King.\n";
    std::cout << "'Not yet, not yet,' the rabbit hurriedly interrupts him.\n";
    std::cout << "\n";

    std::cout << "*      *      *\n";
    std::cout << "As the first witness is called, a piece of cake appears in your pocket.\n";
    std::cout << "Do you want to eat the cake?\n";
    char choice2 = 'k';

    for (int i = 0; i < 3 && choice2 != 'A' && choice2 != 'B'; i++) {

        std::cout << "Press A to eat the cake.\n";
        std::cout << "Press B to wait.\n";
        std::cin >> choice2;

    }

    if (choice2 != 'A' && choice2 != 'B') {

        std::cout << "Sorry, you didn't enter a valid option.\n";
        std::cout << "Goodbye.\n";
        _getch();
        return 0;

    }
    else if (choice2 == 'B') {

        std::cout << "Your stomach growls loudly, interrupting the questioning.\n";
        std::cout << "'YOU ARE GUILTY!' The Queen of Hearts yells.\n";
        std::cout << "'What did I do?' you ask in surprise.\n";
        std::cout << "'She stole the tarts! Thief! OFF WITH HER HEAD!' The Queen points at you. Her face gets redder as her voice grows louder.\n";
        std::cout << "Several cards dressed as guards escort you to be executed.\n";
        std::cout << "Just as your head is placed on the block, you notice a large grin in the tree above you.\n";
        std::cout << "THE END\n";
        _getch();
        return 0;

    }

    std::cout << "You eat the cake and start feeling better. Meanwhile, the trial continues...\n";
    std::cout << "The first witness is the Hatter.\n";
    std::cout << "'Present your evidence,' says the King, 'and don't be nervous, or you'll be executed on the spot.'\n";
    std::cout << "\n";

    std::cout << "*      *      *\n";
    std::cout << "While the Hatter nervously answers, you suddenly feel a very strange sensation—you are growing larger.\n";
    std::cout << "It must be the cake...\n";
    std::cout << "What will you do?\n";
    char choice3 = 'k';

    for (int i = 0; i < 3 && choice3 != 'A' && choice3 != 'B'; i++) {

        std::cout << "Press A to stand up and leave the court.\n";
        std::cout << "Press B to decide to stay as long as there's room for you.\n";
        std::cin >> choice3;

    }

    if (choice3 != 'A' && choice3 != 'B') {

        std::cout << "Sorry, you didn't enter a valid option.\n";
        std::cout << "Goodbye.\n";
        _getch();
        return 0;

    }
    else if (choice3 == 'A') {

        std::cout << "You leave the courtroom in search of a way home.\n";
        std::cout << "However, everyone who might help you is still in the courtroom, so you wander the forest for years.\n";
        std::cout << "THE END\n";
        _getch();
        return 0;

    }

    std::cout << "You stay, to the great dismay of the Mouse, who is quite disturbed and squished sitting next to you.\n";
    std::cout << "'Never mind!' says the King to the Hatter, 'Call the next witness.'\n";
    std::cout << "'— And behead him outside,' the Queen says to an officer.\n";
    std::cout << "You watch as the rabbit fumbles through the list. He reads aloud in his shrill voice:\n";
    std::cout << "ALICE!\n";
    std::cout << "\n";
    std::cout << "*      *      *\n";
    std::cout << "Surprised, what do you do?\n";

    char choice4 = 'k';

    for (int i = 0; i < 3 && choice4 != 'A' && choice4 != 'B' && choice4 != 'C'; i++) {

        std::cout << "Press A to stand up and declare yourself present.\n";
        std::cout << "Press B to stay seated and shout 'Here!'.\n";
        std::cout << "Press C if you try to sneak out of the courtroom.\n";
        std::cin >> choice4;

    }

    switch (choice4) {

    case 'A':
        std::cout << "You grow so large that you accidentally knock the judge's stand over with your foot as you get up.\n";
        std::cout << "'I hope you are not planning to behead me,' you say.\n";
        std::cout << "'OFF WITH HER—' the Queen begins, but she stops herself upon realizing how big you are.\n";
        std::cout << "You smile triumphantly, and the Queen appears intimidated.\n";
        break;

    case 'B':
        std::cout << "'Here!' you shout. Everyone turns to look at you.\n";
        std::cout << "'OFF WITH HER—' the Queen begins, but she stops herself upon realizing how big you are.\n";
        std::cout << "You smile triumphantly, and the Queen appears intimidated.\n";
        break;

    case 'C':
        std::cout << "You quickly try to sneak out of the courtroom while everyone is busy. However, the Queen sees you and shouts:\n";
        std::cout << "'OFF WITH HER HEAD!' You are quickly seized and executed.\n";
        std::cout << "THE END\n";
        _getch();
        return 0;

    default:
        std::cout << "Sorry, you didn't enter a valid option.\n";
        std::cout << "Goodbye.\n";
        _getch();
        return 0;

    }

    std::cout << "Suddenly, the Queen leaps from her throne, screaming, 'Who cares about her size? Execute her anyway!' The entire deck of cards flies up into the air.\n";
    std::cout << "Just as the cards begin to fall on you...\n";
    std::cout << "*      *      *\n";
    std::cout << "You wake up in the forest next to your sister, who is gently shaking you. 'It's time to go home,' she says.\n";
    std::cout << "Was it all a dream?\n";

    _getch();
    return 0;
}
