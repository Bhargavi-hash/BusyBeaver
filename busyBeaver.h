#ifndef BB_H
#define BB_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <sys/syscall.h>
#include <unistd.h>

#define TapeLenght 10

/* 
    Struct for transition table cells.
    Element format: (elem, state, head)
    elem:  Value to write to the tape (0/1)
    state: State to which it changes (A/B/C/H)
    head: Describes the movement of head (Right/Left)
*/
struct busyBeaver
{
    int elem;
    int state; // state A = 0; state B = 1; state C = 2; state H = 3
    char head;
};

struct busyBeaver Ttable[3][4]; // Transition table

int tape[TapeLenght];   // Creating a tape of length 10 cells.
int headCell;           // Indicates the cell index to which our head pointer is pointing to.

int step;
int state;

#endif
