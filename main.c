#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

    // Your code goes here
    int dice_rolls[100];
    int sum = 0;

    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;

    //rolls the dice 100 times and puts it into an array
    for (int i = 0; i < 100; i++)
    {
        int dice_roll = (rand() % 6) + 1;
        dice_rolls[i] = dice_roll;
    }

    //categorizes the rolls by number
    for (int i = 0; i < 100; i++) 
    {
        if (dice_rolls[i] == 1) 
        {
            one++;
        }     
        else if (dice_rolls[i] == 2) 
        {
            two++;
        }      
        else if (dice_rolls[i] == 3)
        {
            three++;
        }
            
        else if (dice_rolls[i] == 4)
        {
            four++;
        }   
        else if (dice_rolls[i] == 5)
        {
            five++;
        }   
        else
        {
            six++;
        }

        sum += dice_rolls[i];
    }
    
    //prints the output
    printf("%d\n%d\n%d\n%d\n%d\n%d\n", one, two, three, four, five, six);
    printf("%d\n", sum);
    printf("%.1f", (float)sum / 100);

    return 0;
}
