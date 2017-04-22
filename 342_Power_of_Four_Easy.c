/*
Given an integer (signed 32 bits), write a function to check whether it is a power of 4. 
*/

bool isPowerOfFour(int num){
    int i;
    double test=(double)(num);

    for(i=0;i<100;i++)
    {
        if(test==1)
            return true;
        else if(test<1)
            return false;
        else
            test = test / 4;
    }
    return;
}
