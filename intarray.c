#include <stdio.h>

int main()
{
	int arr[5];  // This creates an empy array with 5 elements

<<<<<<< Updated upstream
	arr[0] = 12;
	arr[1] = 23;
	arr[2] = 43;
	arr[3] = 93;
	arr[4] = 100;

=======
	arr[0] = 2;  // Arrays start with element 0
	arr[1] = 4;
	arr[2] = 6;  // 3rd element
	arr[3] = 8;
	arr[4] = 10; // In a 5 element array, the last element is actually at 4 since the 1st element is at position 0
>>>>>>> Stashed changes

	printf("%i %i %i %i %i\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	printf("%i %i %i %i %i\n", arr[0] + 1, arr[1] + 1, arr[2] + 1, arr[3] + 1, arr[4] + 1);
	// write a new printf statement that adds 1 to each array element
	// Hint: use the . command to repeat an insert of + 1 after each array element
    // yyp
    // f]a + 1<ESC>;.;.;.

	return 0;
}
