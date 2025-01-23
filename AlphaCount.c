/* Program to test arrays in C, read files and user input, and
 * store information in the array.
 *
 * @assignment ICS 212 Assignment 11
 * @author Benavente, Ka'ili
 * @date 10/15/24
 */
void printInstructions(void);
void loopAndCountLetters(int array[]);
void outputResults(int array[], int a);
#include <stdio.h>
int main (void) {

  int letterCount[26] = {0};
  printInstructions();
  loopAndCountLetters(letterCount);
  outputResults(letterCount, 26);

  return 0;

} //main close

//printInstructions method open
void printInstructions(void) {

  puts("This program will count the amount of times you use the letters of the alphabet.\nType several sentences, or use input redirection to input a file.\nWhen you are finished inputting your text, enter EOF (end of File) by pressing Enter then Ctrl-D.");

} //printInstructions close

//loopAndCountLetters open
void loopAndCountLetters(int array[]) {

  //Declare index variable
  int index = 0;

  //While loop to continuously read as user types
  while ((index = getchar()) != EOF) {
    //If statement checks for letters and increments array accordingly
    if ('A' <= index && index <= 'Z') { //capital letters
      array[index - 'A']++;
    } else if ('a' <= index && index <= 'z') { //lowercase
      array[index - 'a']++;
    } //if close

  } //while close


} //loopAndCountLetters close

//outputResults opening
void outputResults(int array[], int size) {

  //Print header format
  printf("\n%9s %9s\n", "Character:", "Count:");

  //Initializing variable that holds count of letters
  int letterTotal = 0;

  //For loop to iterate through array for amount of each letter
  int i = 0;
  for (i = 0; i < size; ++i) {
    //Prints letter amount
    printf("%9c %9d\n", 'a' + i, array[i]);
    //Counting amount of letters
    letterTotal += array[i];
  } //for close

  //Printing amount of characters present
  printf("\nTotal Character Count: %d\n", letterTotal);

} //outputResults close
