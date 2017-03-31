/* 
 * File:   main.c
 * Author: zachery
 *
 * Created on 14 October 2016, 11:38
 * 
 * Created while learning C, the idea is that there are 100 doors, and
 * you make 100 passes on those doors, the first time through you toggle
 * every single door, if closed open it, if open close it.
 * On the second pass you only toggle every 2nd door, then the third
 * pass every 3rd door until only the 100th door is visited.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * The entry point to the program that will create 100 doors in an array.
 * Then iterate from 0 to 100 inverting the doors
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char** argv) {
    int doors[100];
    /* Assign all the doors to be closed*/
    for(int i = 0; i < 100; i++){
        doors[i] = 0;
    }
    /* Define the later function*/
    void invertDoors(int doors[100], int jump);
    /* Loop Through */
    for(int i = 0; i < 100; i++){
        invertDoors(doors, i);
    }
    
    for(int i = 0; i < 100; i++){
        printf("\n Door %d is %d", (i+1), doors[i]);
    }
    
    return (EXIT_SUCCESS);
}

/**
 * Inverts the doors it's given, only inverting the doors that are visited, 
 * the doors visited are determined by the start, starting at the start
 * location and inverting each door 'start' doors down.
 * @param doors - The array of doors
 * @param start - The starting point in the array
 */
void invertDoors(int doors[100], int start){
    int jump = (start + 1);
    int index = start;
    
    while(index < 100){
        if(doors[index] == 0)
            doors[index] = 1;
        else
            doors[index] = 0;
        /*Incriment index*/
        index += jump;
    }
}



