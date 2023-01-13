#include <iostream>
using namespace std;

int main()
{
    // Set the random number generator seed
    srand(time(0));
    int arrayLength;
    int targetNumber;

    // Enter the desired array length
    cout << "Please enter array length. (From 2 to 104)" << endl;
    cin >> arrayLength;

    if (arrayLength < 2 || arrayLength > 104) {
        cout << "Incorrect array length!" << endl;
        exit(0);
    }

    // Enter the target number
    cout << "Please enter target. (From -109 to 109)" << endl;
    cin >> targetNumber;

    if (targetNumber < -109 || targetNumber > 109) {
        cout << "Incorrect taget!" << endl;
        exit(0);
    }

    // Place the radom numbers in the array
    // Print the array and terget value
    int randomArray[arrayLength];
    cout << "Input: nums = [";
    for (int i = 0; i < arrayLength; i++) {
        int randomNum = rand() % 219 + (-109);
        randomArray[i] = randomNum;
        if (i < (arrayLength - 1)) {
            cout << randomArray[i] << ",";
        } else {
            cout << randomArray[i];
        }
    }
    cout << "], target = " << targetNumber << endl;

    int outputOne;
    int outputTwo;

    // Find the two indices of numbers adding to the target number
    for (int x = 0; x < arrayLength; x++) {
        for (int y = x + 1; y < arrayLength; y++) {
            if (randomArray[x] + randomArray[y] == targetNumber) {
                outputOne = x;
                outputTwo = y;
                cout << "Output: [" << x << "," << y << "]" << endl;
                cout << "Output: Because nums[" << x << "] + nums[" << y << "] == " << targetNumber 
                    << ", we return " << "[" << x << "," << y << "]" << endl;
                exit(0);
            }
        }
    }
    cout << "Target not found!" << endl;
    exit(0);
}
