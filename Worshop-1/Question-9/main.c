#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

#define MAX_THREADS 100

void *threadFunction(void *arg) {
    int id = *((int *)arg);
    for (int i = 0; i < 10; i++) {
        printf("Thread ID %d: i=%d\n", id, i);
        Sleep(100); 
    }
    return NULL;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <number_of_threads>\n", argv[0]);
        return 1;
    }

    int numThreads = atoi(argv[1]);

    if (numThreads < 1 || numThreads > MAX_THREADS) {
        fprintf(stderr, "Error: Number of threads must be between 1 and %d.\n", MAX_THREADS);
        return 1;
    }

    pthread_t threads[numThreads];
    int threadIds[numThreads];

    for (int i = 0; i < numThreads; i++) {
        threadIds[i] = i + 1; 
        if (pthread_create(&threads[i], NULL, threadFunction, &threadIds[i]) != 0) {
            perror("pthread_create");
            return 1;
        }
    }

    
    for (int i = 0; i < numThreads; i++) {
        if (pthread_join(threads[i], NULL) != 0) {
            perror("pthread_join");
            return 1;
        }
    }

    return 0;
}
