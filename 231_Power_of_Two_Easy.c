/*
Given an integer, write a function to determine if it is a power of two. 
*/

bool isPowerOfTwo(int n) {
    return(n>0 && 1073741824%n==0);
}
