/*
Create a Die class interface to model a game with 6 sides 
and values 1,2,3,4,5, and 6.

public function roll that returns an int

private int sides with a value of 6
*/
#include "dna_hamming.h"
#include "dna_hamming.cpp"


class Die :
{
public:
	void roll(roll_value):
		roll_value = (rand() % 6) + 1;
	int roll_value() const
		return roll_value();


private: 
	int roll_val;
	int sides{ 6 };


}
