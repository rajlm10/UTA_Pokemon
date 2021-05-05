# UTA_Pokemon
A basic game developed to illustrate OOP concepts for the course CSE1002 -Object Oriented Programming in C++ for which I am a Teaching Assistant

## STRUCTURE V2
This is the second version built on the boilerplate version.

## Overview

The game will consist of Pokemon of three types (Fire,Water,Grass). Each Pokemon has a health and 4 attacks which have different power hits. During a fight attacks will be randomly chosen and used on the opponent Pokemon. The first Pokemon to exhaust its health would lose the battle.

## Pokemon Class

This class has a name, health, List of Attack names & powers for each corresponding attack. Note that all of these properties are under the 
**protected** scope since the derived class will also inherit these properties. **Please think why having the usual private scope wouldn't have worked in our case.**

## The children classes (Fire,Water & Grass)

**Inheritance**

These classes are all Pokemon and inherit **publicly** from the base class.

**Note**- The most important thing to observe is how these three children call the Pokemon class' parameterised constructor in their own constructors. Also observe how **default** values are set in functions using the **=** operator. All these classes have a type to denote their class name which will be useful later when we add additional features.

All these classes have methods to set attack names and powers. However since it's tedious and users only care about playing the game I have provided default values in those functions.

**Also read about the this keyword and why it is used, feel free to clarify with me.**


## Future Work
**IMPLEMENTED IN V2**

This is the basic set up, now we must add a function in each derived class which **randomly** selects an attack from it's list and returns the attack power. We will call this ``` int attack() ```. And in addition all the derived classes must have a function  

```void onAttack(int power)``` which deducts the power from ```this->health``` on being attacked.

**PENDING**

Keep thinking of additional features like **type advantages** for example fire should be at a disadvantage against water.

We can also add levels to Pokemon to make sure some attacks are stronger at higher levels.

## Bad Programming Practice

As you will see in the code all 3 children classes have the same functions which introduces redundancy, in that case why didn't we add them in the parent class? Give it a try and you shall see. Later we will use practices such as **virtual functions** to correct this bad practice.

## Contributing
Pull requests are welcome. Please work on the thoughts under **Future Work** and then open an issue first to discuss what you would like to change.


## Usage

All three derived classes have the same method so I am demonstrating using the Fire class only, use the same syntax with other classes.


```C++
Fire charizard ("Charizard"); //Option to add health in constructor
charizard.setAttack_names(); //Option to give custom names see function
charizard.setAttack_powers(); //Option to give custom attack powers see function 
charizard.getDetails();
```

## License
[MIT](https://choosealicense.com/licenses/mit/)
