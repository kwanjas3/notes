#include <stdio.h>
int int main(int argc, char const *argv[])
{
	//array notes
	//the structure: type var [size]; recall: char is 1 byte = 8 bits, int is 4 bytes 32bits, double is 8 bits or 64 bits
	//short int is 2 bytes 16 bit, long is 4byte/32 bits, long long int is 8bytes/64bits
	
	int grade[8]; //an integer array with size 8, addresses 0-7 also u can initialize with nothing inside or specify values
	//to locate the information stored on array, specify its address location
	int x = grade[5]; // this stores the value of the array in grade position 6 to the var x

	//using loops to parse arrays
	int i;
	grade[] = {10,2,3,4,5,6,7,8} //storing values

	for (i = 0; i<7; i++)
		printf("the value stored in the grades array is %d in position %d", grade[i], i + 1 ); //array address are 0-7, +1 to correct position


	//parallel arrays let us store information in parallel eg. studnum # + grade

	int studnum [ 123123132, 321321321, 456456456];
	double gpa[ 4.0,2.0,2.5];
	int counter
	for (counter =0; counter <3; counter++)
		printf("Student Number   GPA\n");
		printf("%d    %.2lf\n",studnum,gpa );

		//arrays can store the position of characters in an int type, however you need to add an extra bit for the \0 value at the end
		//so if u have a string of 16 chars, your array needs to have 17 bits 
		//finally you need a const in value

		
		const int tes = 17;
		char name[]="My name is Arnold";
		printf("%s\n",name );




	return 0;
}