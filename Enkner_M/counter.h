/*-----------------------------------------------------------------------------
*				HTBLA-Leonding / Class: <your class name here>
*-----------------------------------------------------------------------------
* Exercise Number: #exercise_number#
* File:			counter.h
* Author(s):	<your name here>
* Due Date:		#due#
*-----------------------------------------------------------------------------
* Description:
* A counter to count up and count down.
*-----------------------------------------------------------------------------
*/
#ifndef ___COUNTER_H
#define ___COUNTER_H
#include <stdbool.h>

const int COUNTER_COUNT = 8;
enum Directions {UP,DOWN,UNDEFINED};

typedef struct CounterImp* Counter;

Counter new_counter(enum Directions direction);
void init();
void set_direction(Counter counter,enum Directions direction);
enum Directions get_direction(Counter counter);
void increment(Counter counter);
void set_increment_value(Counter counter,int value);
int get_increment_value(Counter counter);
bool set_value(Counter counter,int value);
int get_value(Counter counter);
#endif
