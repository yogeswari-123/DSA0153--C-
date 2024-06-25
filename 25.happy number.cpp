#include <bits/stdc++.h> 
using namespace std; 


int SumOfSquNum(int givno)
{
    int SumOfSqr = 0; 
    while (givno)
    {
        
        SumOfSqr += (givno % 10) * (givno % 10);
        givno /= 10; 
    }
    return SumOfSqr; 
}


bool checkHappy(int chkhn)
{
    int slno, fstno; // Declare variables to keep track of sequence
    slno = fstno = chkhn; // Initialize both variables with the given number
    do
    {
        // One pointer moves by calculating sum of squares of digits once
        slno = SumOfSquNum(slno);
        // Another pointer moves by calculating sum of squares of digits twice
        fstno = SumOfSquNum(SumOfSquNum(fstno));
    }
    // Continue until both pointers meet or they reach the Happy number condition (sum equals 1)
    while (slno != fstno);
    return (slno == 1); // Return true if the number is a Happy number, else return false
}

// Main function
int main()
{
    int hyno; // Variable to store the user input number
    cout << "\n\n Check whether a number is a Happy number or not: \n"; // Display message about the program
    cout << " ---------------------------------------------------\n";
    cout << " Input a number: "; // Prompt the user to enter a number
    cin >> hyno; // Read the user input

    // Check if the input number is a Happy number and display the result
    if (checkHappy(hyno))
        cout << hyno << " is a Happy number\n";
    else
        cout << hyno << " is not a Happy number\n";

    return 0; // Return 0 to signify successful completion of the program
}
