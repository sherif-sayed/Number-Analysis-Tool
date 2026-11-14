
#include <iostream>
using namespace std;

// Function to input numbers
void first(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }
}

// Function to calculate sum
double add(int arr[], int n) {
    double sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum;
}

// Function to calculate average
double avr(int n, double sum) {
    return sum / n;
}

// Function to find largest number
int larg(int arr[], int n) {
    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

// Function to find smallest number
int small(int arr[], int n) {
    int smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    return smallest;
}

// Function to identify even and odd numbers
void oddoreven(int arr[], int n, int e, int o) {
    e = 0;
    o = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " is Even" << endl;
            e++;
        }
        else {
            cout << arr[i] << " is Odd" << endl;
            o++;
        }
    }

    cout << "Even numbers count: " << e << endl;
    cout << "Odd numbers count: " << o << endl;
}

int main() {
    int arr[100];
    int n;
    int e = 0, o = 0;

    cout << "How many numbers? ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Invalid number of elements!" << endl;
        return 0;
    }

    first(arr, n);

    double sum = add(arr, n);
    double average = avr(n, sum);

    cout << "\n______________________________________" << endl;
    cout << "         NUMBER ANALYSIS TOOL" << endl;
    cout << "______________________________________" << endl;

    cout << "\n~~~~~~~~~~~~ RESULTS ~~~~~~~~~~~~~~~" << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Largest: " << larg(arr, n) << endl;
    cout << "Smallest: " << small(arr, n) << endl;

    cout << "\n-------- EVEN & ODD ANALYSIS --------" << endl;
    oddoreven(arr, n, e, o);

    return 0;
}
