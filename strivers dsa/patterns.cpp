//Pattern-1: Rectangular Star Pattern
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
        
    }
    return 0;
}
//Algorithm
// Intuition: The task is to print a square pattern of stars. Since the number of rows and columns are equal, we can use two nested loops: the outer one for rows and the inner one for printing N stars per row.
// Take an integer N as input to define the size of the square.
// Use a loop from 0 to N-1 to represent each row.
// Inside that loop, use another loop from 0 to N-1 to print stars in the current row.
// Print "* " during each inner loop iteration to form the row.
// After each inner loop completes, move to the next line.
//Complexity Analysis

// Time Complexity: O(N²), since we print N stars for each of the N rows.
// Space Complexity: O(1), no additional space is used apart from loop variables.


//Pattern-2: Right-Angled Triangle Pattern
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

//Algorithm
// This is one of the simplest star patterns. We need to form a right-angled triangle where the number of stars in each row increases line by line. Row i contains exactly i + 1 stars.

// Run an outer loop from 0 to N-1 to handle rows.
// For each row i, run an inner loop from 0 to i.
// In the inner loop, print a star (*).
// After finishing the stars of one row, move to the next line using endl.

//Complexity Analysis-
// Time Complexity: O(N2), Outer loop runs N times, and inner loop runs up to N stars cumulatively.
// Space Complexity: O(1), No extra space is used apart from loop counters.


//Pattern - 3: Right-Angled Number Pyramid
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}

//Algorithm
// We need to print a right-angled triangle where each row contains numbers starting from 1 up to the row number. So, the first row has 1, the second row has 1 2, the third row has 1 2 3, and so on until N.

// Use an outer loop (i) from 1 to N for rows.
// For each row, use an inner loop (j) from 1 to i to print numbers.
// Each row prints numbers starting from 1 up to the current row index.
// After printing each row, move to the next line.

//Complexity Analysis
// Time Complexity: O(N²), because the outer loop runs N times and the inner loop runs up to i times for each row.
// Space Complexity: O(1), since only loop variables are used.



//Pattern - 4: Right-Angled Number Pyramid - II
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}

//Algorithm
// In this pattern, instead of printing increasing numbers from 1 to i in each row, we print the row number itself repeatedly. For example, the first row prints 1, the second row prints 2 2, the third row prints 3 3 3, and so on until N.

// Use an outer loop (i) from 1 to N for rows.
// For each row, use an inner loop (j) from 1 to i.
// Instead of printing j, print i (the current row number).
// After completing one row, move to the next line.

//Complexity Analysis
// Time Complexity: O(N²), because there are two nested loops: the outer loop for rows and the inner loop for printing numbers.
// Space Complexity: O(1), as only loop variables are used.


//Pattern-5: Inverted Right Pyramid

#include <bits/stdc++.h>
using namespace std;

class Solution0 {
public:
    // Function to print Pattern 5
    void pattern5(int N) {
        // Outer loop for rows
        for (int i = 0; i < N; i++) {
            // Inner loop for columns
            // Number of stars decreases with each row
            for (int j = N; j > i; j--) {
                cout << "* ";
            }
            // Move to next line
            cout << endl;
        }
    }
};

int main() {
    // Create object of Solution class
    Solution0 sol;

    // Define size of pattern
    int N = 5;

    // Call pattern function
    sol.pattern5(N);

    return 0;
}

//Algorithm
// In this pattern, the number of stars decreases in each row. The first row has N stars, the second row has N-1, the third has N-2, and so on, until only one star remains in the last row. This creates an inverted right-angled triangle.

// Run an outer loop (i) from 0 to N-1 for rows.
// For each row, run an inner loop (j) starting from N down to i+1.
// Print a star (*) in each iteration of the inner loop.
// After finishing each row, print a newline to move to the next row.


//Complexity Analysis

// Time Complexity: O(N²), since two nested loops are used.

// Space Complexity: O(1), as no extra data structures are needed.





//Pattern - 6: Inverted Numbered Right Pyramid
#include <bits/stdc++.h>
using namespace std;

class Solution1 {
public:
    // Function to print Pattern 6
    void pattern6(int N) {
        // Outer loop for rows
        for (int i = 0; i < N; i++) {
            // Inner loop for columns
            // Prints numbers from 1 up to (N - i)
            for (int j = N; j > i; j--) {
                cout << N - j + 1 << " ";
            }
            // Move to next line
            cout << endl;
        }
    }
};

int main() {
    // Create object of Solution class
    Solution1 sol;

    // Define size of pattern
    int N = 5;

    // Call pattern function
    sol.pattern6(N);

    return 0;
}

//Pattern - 7: Star Pyramid

#include <bits/stdc++.h>
using namespace std;

class Solution2 {
public:
    // Function to print Pattern 7
    void pattern7(int N) {
        // Outer loop for rows
        for (int i = 0; i < N; i++) {
            
            // Print leading spaces (N - i - 1 spaces)
            for (int j = 0; j < N - i - 1; j++) {
                cout << " ";
            }

            // Print stars (2*i + 1 stars)
            for (int j = 0; j < 2 * i + 1; j++) {
                cout << "*";
            }

            // Print trailing spaces (optional, same count as leading spaces)
            for (int j = 0; j < N - i - 1; j++) {
                cout << " ";
            }

            // Move to next row
            cout << endl;
        }
    }
};

int main() {
    Solution2 sol;
    int N = 5;
    sol.pattern7(N);
    return 0;
}

//Pattern - 8: Inverted Star Pyramid
#include <bits/stdc++.h>
using namespace std;

class Solution3 {
public:
    // Function to print Pattern 8
    void pattern8(int N) {
        // Outer loop for rows
        for (int i = 0; i < N; i++) {
            
            // Print leading spaces (increases with row number)
            for (int j = 0; j < i; j++) {
                cout << " ";
            }

            // Print stars (decreases with row number)
            // Formula: total stars = 2*N - (2*i + 1)
            for (int j = 0; j < 2 * N - (2 * i + 1); j++) {
                cout << "*";
            }

            // Print trailing spaces (same as leading spaces)
            for (int j = 0; j < i; j++) {
                cout << " ";
            }

            // Move to next row
            cout << endl;
        }
    }
};

int main() {
    Solution3 sol;
    int N = 5;
    sol.pattern8(N);
    return 0;
}



//Pattern - 9: Diamond Star Pattern
#include <bits/stdc++.h>
using namespace std;

class Solution4 {
public:
    // Function to print the erect (upright) pyramid
    void erect_pyramid(int N) {
        for (int i = 0; i < N; i++) {
            // Print spaces before stars
            for (int j = 0; j < N - i - 1; j++) {
                cout << " ";
            }
            // Print stars
            for (int j = 0; j < 2 * i + 1; j++) {
                cout << "*";
            }
            // Print spaces after stars
            for (int j = 0; j < N - i - 1; j++) {
                cout << " ";
            }
            cout << endl;
        }
    }

    // Function to print the inverted pyramid
    void inverted_pyramid(int N) {
        for (int i = 0; i < N; i++) {
            // Print spaces before stars
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            // Print stars
            for (int j = 0; j < 2 * N - (2 * i + 1); j++) {
                cout << "*";
            }
            // Print spaces after stars
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int N = 5;
    Solution4 obj;
    obj.erect_pyramid(N);
    obj.inverted_pyramid(N);
    return 0;
}




//Pattern - 10: Half Diamond Star Pattern
#include <bits/stdc++.h>
using namespace std;

void pattern10(int N)
{
      // Outer loop for number of rows.
      for(int i=1;i<=2*N-1;i++){
          
          // stars would be equal to the row no. uptill first half 
          int stars = i;
          
          // for the second half of the rotated triangle.
          if(i>N) stars = 2*N-i;
          
          // for printing the stars in each row.
          for(int j=1;j<=stars;j++){
              cout<<"*";
          }
          
           // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
      }
}

int main()
{   
    // Here, we have taken the value of N as 5.
    // We can also take input from the user.
    int N = 5;
    pattern10(N);

    return 0;
}


//Pattern - 11: Binary Number Triangle Pattern



#include <bits/stdc++.h>
using namespace std;

void pattern11(int N) {
    // First row starts by printing a single 1.
    int start = 1;
    
    // Outer loop for the number of rows
    for (int i = 0; i < N; i++) {
        // If the row index is even, print 1 first in that row
        if (i % 2 == 0) start = 1;
        
        // If the row index is odd, print 0 first in that row
        else start = 0;
        
        // Inner loop to print alternating 1's and 0's in each row
        for (int j = 0; j <= i; j++) {
            cout << start;
            // Alternate between 1 and 0
            start = 1 - start;
        }

        // Move to the next line after each row is printed
        cout << endl;
    }
}

int main() {
    // The size of the square pattern is N
    int N = 5;
    pattern11(N); // Print the pattern
    return 0;
}



//Pattern - 12: Number Crown Pattern
#include <bits/stdc++.h>
using namespace std;

// Function to print the pattern
void pattern12(int N) {
    // Initial number of spaces in the first row
    int spaces = 2 * (N - 1);
    
    // Outer loop for the number of rows
    for (int i = 1; i <= N; i++) {
        
        // Inner loop to print numbers in increasing order
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        
        // Inner loop to print spaces in the middle
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        
        // Inner loop to print numbers in decreasing order
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        
        // Move to the next line after printing the row
        cout << endl;
        
        // Decrease spaces by 2 after each row
        spaces -= 2;
    }
}

int main() {
    // Set the value of N
    int N = 5;
    pattern12(N); // Call the function to print the pattern

    return 0;
}



//Pattern - 13: Increasing Number Triangle Pattern

#include <bits/stdc++.h>
using namespace std;

// Function to print the pattern of numbers
void pattern13(int N) {
    int num = 1;  // Starting number

    // Outer loop for the number of rows
    for (int i = 1; i <= N; i++) {

        // Inner loop to print numbers increasing by 1 in each row
        for (int j = 1; j <= i; j++) {
            cout << num << " ";  // Print the current number followed by a space
            num = num + 1;  // Increment the number for the next print
        }

        // Move to the next line after printing the current row
        cout << endl;
    }
}

int main() {
    int N = 5;  // Set the size of the pattern (5 rows)
    pattern13(N);  // Call the function to print the pattern

    return 0;
}





//Pattern-14: Increasing Letter Triangle Pattern

#include <bits/stdc++.h>
using namespace std;

// Function to print the pattern of alphabets
void pattern14(int N) {
    // Outer loop for the number of rows
    for (int i = 0; i < N; i++) {
        
        // Inner loop to print alphabets from A to A + i
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";  // Print the character followed by a space
        }

        // Move to the next line after printing the current row
        cout << endl;
    }
}

int main() {
    int N = 5;  // Set the size of the pattern (5 rows)
    pattern14(N);  // Call the function to print the pattern
    return 0;
}










//Pattern-15: Reverse Letter Triangle Pattern
#include <bits/stdc++.h>
using namespace std;

// Function to print the pattern of alphabets in a decreasing order
void pattern15(int N) {
    // Outer loop for the number of rows
    for (int i = 0; i < N; i++) {
        
        // Inner loop to print alphabets from A to A + (N-i-1)
        for (char ch = 'A'; ch <= 'A' + (N - i - 1); ch++) {
            cout << ch << " ";  // Print the current character followed by a space
        }

        // Move to the next line after printing the current row
        cout << endl;
    }
}

int main() {
    int N = 5;  // Set the size of the pattern (5 rows)
    pattern15(N);  // Call the function to print the pattern
    return 0;
}

//Pattern - 16: Alpha-Ramp Pattern

#include <bits/stdc++.h>
using namespace std;

// Function to print the pattern where each letter is repeated in the row
void pattern16(int N) {
    // Outer loop for the number of rows
    for (int i = 0; i < N; i++) {
        
        // Define the character for each row based on row index
        char ch = 'A' + i;
        
        // Inner loop to print the character for i times in the row
        for (int j = 0; j <= i; j++) {
            cout << ch << " ";  // Print the character followed by a space
        }

        // Move to the next line after printing the current row
        cout << endl;
    }
}

int main() {
    int N = 5;  // Set the size of the pattern (5 rows)
    pattern16(N);  // Call the function to print the pattern
    return 0;
}



//Pattern - 17: Alpha-Hill Pattern

#include <bits/stdc++.h>
using namespace std;

// Function to print the alphabet pyramid pattern
void pattern17(int N) {
    // Loop for each row
    for (int i = 0; i < N; i++) {

        // Print leading spaces
        for (int j = 0; j < N - i - 1; j++) {
            cout << " ";
        }

        // Initialize character to start from 'A'
        char ch = 'A';

        // Calculate midpoint of the row
        int breakpoint = (2 * i + 1) / 2;

        // Print the characters in the row
        for (int j = 1; j <= 2 * i + 1; j++) {
            cout << ch;

            // Increment character till the midpoint, then decrement
            if (j <= breakpoint) ch++;
            else ch--;
        }

        // Print trailing spaces
        for (int j = 0; j < N - i - 1; j++) {
            cout << " ";
        }

        // Newline after each row
        cout << endl;
    }
}

// Driver code
int main() {
    int N = 5;
    pattern17(N);
    return 0;
}






//Pattern-18: Alpha-Triangle Pattern
void pattern18(int n){
    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int N = 5;
    pattern18(N);
    return 0;
}



//Pattern-19: Symmetric-Void Pattern
#include <bits/stdc++.h>
using namespace std;

class Solution5 {
public:
    // Function to print Pattern 19
    void pattern19(int N) {
        // Initial spaces for upper half
        int iniS = 0;

        // Loop for upper half rows
        for (int i = 0; i < N; i++) {
            // Print stars on left
            for (int j = 1; j <= N - i; j++) {
                cout << "*";
            }
            // Print spaces in middle
            for (int j = 0; j < iniS; j++) {
                cout << " ";
            }
            // Print stars on right
            for (int j = 1; j <= N - i; j++) {
                cout << "*";
            }
            // Increase middle spaces by 2
            iniS += 2;
            // Move to next row
            cout << endl;
        }

        // Initial spaces for lower half
        iniS = 2 * N - 2;

        // Loop for lower half rows
        for (int i = 1; i <= N; i++) {
            // Print stars on left
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            // Print spaces in middle
            for (int j = 0; j < iniS; j++) {
                cout << " ";
            }
            // Print stars on right
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            // Decrease middle spaces by 2
            iniS -= 2;
            // Move to next row
            cout << endl;
        }
    }
};

int main() {
    // Create solution object
    Solution5 sol;
    // Define N
    int N = 5;
    // Call pattern function
    sol.pattern19(N);
    return 0;
}




//Pattern - 20: Symmetric-Butterfly Pattern

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to print Pattern 20
    void pattern20(int n) {
        // Initialize spaces between star blocks
        int spaces = 2 * n - 2;

        // Loop for rows
        for (int i = 1; i <= 2 * n - 1; i++) {
            // Calculate stars for first half
            int stars = i;

            // Adjust stars for second half
            if (i > n) stars = 2 * n - i;

            // Print left stars
            for (int j = 1; j <= stars; j++) {
                cout << "*";
            }

            // Print spaces
            for (int j = 1; j <= spaces; j++) {
                cout << " ";
            }

            // Print right stars
            for (int j = 1; j <= stars; j++) {
                cout << "*";
            }

            // Move to next line
            cout << endl;

            // Adjust spaces for next row
            if (i < n) spaces -= 2;
            else spaces += 2;
        }
    }
};

int main() {
    // Create solution object
    Solution sol;
    // Define N
    int N = 5;
    // Call pattern function
    sol.pattern20(N);
    return 0;
}



//Pattern - 21: Hollow Rectangle Pattern
#include <bits/stdc++.h>
using namespace std;

class Solution6 {
public:
    // Function to print hollow square pattern
    void pattern21(int n) {
        // Outer loop for rows
        for (int i = 0; i < n; i++) {
            // Inner loop for columns
            for (int j = 0; j < n; j++) {
                // Print star if it's a border cell
                if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                    cout << "*";
                // Print space otherwise
                else
                    cout << " ";
            }
            // Move to next line after each row
            cout << endl;
        }
    }
};

int main() {
    // Create solution object
    Solution6 sol;
    // Define N
    int N = 5;
    // Call pattern function
    sol.pattern21(N);
    return 0;
}


//Pattern - 22: The Number Pattern
#include <bits/stdc++.h>
using namespace std;

class Solution8 {
public:
    // Function to print concentric square number pattern
    void pattern22(int n) {
        // Outer loop for rows
        for (int i = 0; i < 2 * n - 1; i++) {
            // Inner loop for columns
            for (int j = 0; j < 2 * n - 1; j++) {
                // Calculate distance from top
                int top = i;
                // Calculate distance from left
                int left = j;
                // Calculate distance from bottom
                int bottom = (2 * n - 2) - i;
                // Calculate distance from right
                int right = (2 * n - 2) - j;

                // Take the minimum of all four distances
                int minDist = min(min(top, bottom), min(left, right));

                // Print number (starts with n at border, decreases inside)
                cout << (n - minDist) << " ";
            }
            // Move to the next row
            cout << endl;
        }
    }
};

int main() {
    // Create object of Solution class
    Solution8 sol;

    // Define size of pattern
    int N = 5;

    // Call pattern function
    sol.pattern22(N);                       

    return 0;
}
