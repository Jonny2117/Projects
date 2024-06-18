
import random

print('Winning rules of the game ROCK PAPER SCISSORS are :\n'
      + "Rock vs Paper -> Paper wins \n"
      + "Rock vs Scissors -> Rock wins \n"
      + "Paper vs Scissors -> Scissor wins \n")

while True:
    print("Player 1: \n 1 - Rock \n 2 - Paper \n 3 - Scissors \n")
    
    #take input from player 1
    choice = int(input("Enter your choice :"))

    # OR is the short-circuit operator
    # if any one of the condition is true
    # then it return True value

    # looping until user enter invalid input
    while choice > 3 or choice < 1:
        choice = int(input('Enter a valid choice please ☺'))

        # initialize value of choice_name variable
    # corresponding to the choice value
    if choice == 1:
        choice_name = 'Rock'
    elif choice == 2:
        choice_name = 'Paper'
    else:
        choice_name = 'Scissors'
    
    
    print("Player 2: \n 1 - Rock \n 2 - Paper \n 3 - Scissors \n")
    
    #take input from player 2
    choice2 = int(input("Enter your Choice :"))
    
    #loop until a valid choice is given
    while choice2 > 3 or choice2 < 1:
        choice2 = int(input('Enter a valid choice!'))
        
        if choice2 == 1:
            choice_name2 == 'Rock'
        elif choice2 == 2:
            choice_name2 == 'Paper'
        else:
            choice_name2 == 'Scissors'
        
    #Player 2
    
    print("    ")
    print("Rock, Paper, Scissors, Shoot!")
    
    #Check for winner
    if choice == choice2:
        print('Its a Draw', end="")
        result = "DRAW"
    # condition for winning
    if (choice == 1 and choice2 == 2):
        print('Paper covers Rock =>', end="")
        result = 'Paper'
    elif (choice == 2 and choice2 == 1):
        print('paper covers Rock =>', end="")
        result = 'Paper'

    if (choice == 1 and choice2 == 3):
        print('Rock crushes Scissors =>\n', end="")
        result = 'Rock'
    elif (choice == 3 and choice2 == 1):
        print('Rock crushes Scissors =>\n', end="")
        result = 'RocK'

    if (choice == 2 and choice2 == 3):
        print('Scissors cuts Paper =>', end="")
        result = 'Scissors'
    elif (choice == 3 and choice2 == 2):
        print('Scissors cuts Paper =>', end="")
        result = 'Rock'
     # Printing either user or computer wins or draw
    if result == 'DRAW':
        print("<== Its a tie ==>")
    if result == choice_name:
        print(" <== Player 1 wins ==>")
    else:
        print(" <== Player 2 wins ==>")
    print("Do you want to play again? (Y/N)")
    # if user input n or N then condition is True
    ans = input().lower()
    if ans == 'n':
        break
# after coming out of the while loop
# we print thanks for playing
print("thanks for playing")
        
