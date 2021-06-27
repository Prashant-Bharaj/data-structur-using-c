/*
A bracket sequence is a string that contains only characters '(' and ')'.

A correct bracket sequence is a bracket sequence that can be transformed into a correct arithmetic expression by inserting characters '1' and '+' between the original characters of the sequence. For example, bracket sequences '()()' and '(())' are correct. The resulting expressions of these sequences are: '(1)+(1)' and '((1+1)+1)'. However, '(', ')(', and '(' are incorrect bracket sequences. 

You are given a bracket sequence , where  denotes the type of 's bracket (open or close). It is not mandatory that  is necessarily correct. Your task is to determine the number of 's such that  is a correct bracket sequence.

Input format

The single line contains sequence .
*/
#include<stdio.h>

int main(){
    char *arr = (char *) malloc(500000*sizeof(char*));
    scanf("%s",&arr);
    printf("%s", arr);
    return 0;
}
