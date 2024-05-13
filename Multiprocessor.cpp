#include <iostream>
#include <omp.h>
using namespace std;

int main() {
    const int numThreads = 5;

    #pragma omp parallel num_threads(numThreads)
    {
        int threadID = omp_get_thread_num();

        cout << "Hello from thread " << threadID << endl;
    }

    cout << "All threads have finished execution." << endl;

    return 0;
}