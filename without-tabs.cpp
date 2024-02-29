#include <iostream>

using namespace std;

int main()
{
    /* Sequence 1
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            int result = i * j;
            if (result < 10) {
                cout << "   ";
            } else {
                cout << "  ";
            }
            cout << result << " ";
        }
        cout << endl;
    }
    */

    /* Sequence 2
    for (int i = 1; i <= 10; i++) {
        int j = 1;
         while (j <= 10) {
            int result = i * j;
            if (result < 10) {
                cout << "   ";
            } else {
                cout << "  ";
            }
            cout << result << " ";
            j++;
         }
         cout << endl;
    }
    */

    /* Sequence 3
    for (int i = 1; i <= 10; i++) {
        int j = 1;
         do {
            int result = i * j;
            if (result < 10) {
                cout << "   ";
            } else {
                cout << "  ";
            }
            cout << result << " ";
            j++;
         } while (j <= 10);
         cout << endl;
    }
    */

    /* Sequence 4
    int i  = 1;
    while (i <= 10) {
        for (int j = 1; j <= 10; j++) {
            int result = i * j;
            if (result < 10) {
                cout << "   ";
            } else {
                cout << "  ";
            }
            cout << result << " ";
        }
        cout << endl;
        i++;
    }
    */

    /* Sequence 5
    int i = 1;
    while (i <= 10) {
        int j = 1;
        while (j <= 10) {
            int result = i * j;
            if (result < 10) {
                cout << "   ";
            } else {
                cout << "  ";
            }
            cout << result << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    */

    /* Sequence 6
    int i = 1;
    while (i <= 10) {
        int j = 1;
        do {
            int result = i * j;
            if (result < 10) {
                cout << "   ";
            } else {
                cout << "  ";
            }
            cout << result << " ";
            j++;
        } while (j <= 10);
        cout << endl;
        i++;
    }
    */

    /* Sequence 7
    int i = 1;
    do {
        for (int j = 1; j <= 10; j++) {
            int result = i * j;
            if (result < 10) {
                cout << "   ";
            } else {
                cout << "  ";
            }
            cout << result << " ";
        }
        cout << endl;
        i++;
    } while (i <= 10);
    */

    /* Sequence 8
    int i = 1;
    do {
        int j = 1;
        while (j <= 10) {
            int result = i * j;
            if (result < 10) {
                cout << "   ";
            } else {
                cout << "  ";
            }
            cout << result << " ";
            j++;
        }
        cout << endl;
        i++;
    } while (i <= 10);
    */

    /* Sequence 9
    int i = 1;
    do {
        int j = 1;
        do {
            int result = i * j;
            if (result < 10) {
                cout << "   ";
            } else {
                cout << "  ";
            }
            cout << result << " ";
            j++;
        } while (j <= 10);
        cout << endl;
        i++;
    } while (i <= 10);
    */

    return 0;
}
