#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void processExecution(char *process, int *executionTime, int size, int timeSlice) {
    queue<int> processQueue;
    for (int i = 0; i < size; ++i) {
        processQueue.push(i); // push the index of the process
    }

    int currentTime = 0;

    while (!processQueue.empty()) 
    {
        int index = processQueue.front();
        processQueue.pop();

        // Determine how much time the process can execute
        int timeToExecute = min(timeSlice, executionTime[index]);

        // Print the current state of execution
        for (int i = 0; i < size; ++i) {
            if (executionTime[i] > 0) {
                cout << process[i] << " " << executionTime[i] << ", ";
            }
        }
        cout << endl;

        // Execute the process
        currentTime += timeToExecute;
        executionTime[index] -= timeToExecute;

        // Check if the process is finished
        if (executionTime[index] == 0) {
            cout << process[index] << " ends at " << currentTime << endl;
        } else {
            // If not finished, put it back in the queue
            processQueue.push(index);
        }
    }
}

int main() {
    char process[] = {'A', 'B', 'C', 'D', 'E'};
    int executionTime[] = {7, 2, 5, 6, 4};
    int size = 5;
    int timeSlice = 3;

    processExecution(process, executionTime, size, timeSlice);
    
    return 0;
}