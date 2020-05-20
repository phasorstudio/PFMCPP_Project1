#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:kid
//  action 1:plays
kid.plays();
//  action 2:studys
kid.studys();
//  action 3:argues
kid.argues(); 
//  2)
//  Noun:bass
//  action 1:ring the string
bass.ringString();
//  action 2:make a sound
bass.makeSound();
//  action 3:record
bass.record(); 
//  3)
//  Noun:phone
//  action 1:rings
phone.rings();
//  action 2:hang up
phone.hangUp();
//  action 3:talking to
phone.talkingTo(); 
//  4)
//  Noun:eq
//  action 1:subtract Lows
eq.subtractLows();
//  action 2:add highs
eq.addHighs
//  action 3:notch mids
eq.notchMids(); 
//  5)
//  Noun:constructor
//  action 1:measuring
constructor.measuring();
//  action 2:planning
constructor.planning();
//  action 3:building
constructor.building(); 
//  6)
//  Noun:bird
//  action 1:born
bird.born();
//  action 2:grows up
bird.growsUp();
//  action 3:fly away
bird.flyAway(); 
//  7)
//  Noun:dog
//  action 1:bark
dog.bark();
//  action 2:eat
dog.eat();
//  action 3:sleep
dog.sleep(); 
//  8)
//  Noun:programmer
//  action 1:read
programmer.read();
//  action 2:type
programmer.type();
//  action 3:view
programmer.view(); 
//  9)
//  Noun:car
//  action 1:wash
car.wash();
//  action 2: run
car.run();
//  action 3:drift
car.drift(); 
//  10)
//  Noun:fireFighter
//  action 1:set the Hose
fireFighter.setHose();
//  action 2:savingLives
fireFighter.savingLives();
//  action 3:climbingSpots
fireFighter.climbingSpots(); 


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
