/*
What is the time, space complexity of following code :

CODE:
int a = 0, b = 0;
for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
        a = a + j;
    }
}
for (k = 0; k < N; k++) {
    b = b + k;
}

OPTIONS:
a. O(N * N) time, O(1) space
b. O(N) time, O(N) space
c. O(N * N * N) time, O(1) space
d. O(N * N) time, O(N) space

SOLUTION:
Correct option is (a.).

LOGIC:
here:
int a = 0, b = 0;             --> T(n) = 1, S(n) = 1;
for (i = 0; i < N; i++) {     --> T(n) = (N-1), S(n) = 0;
    for (j = 0; j < N; j++) { --> T(n) = N(N-1), S(n) = 0;
        a = a + j;            --> T(n) = 1, S(n) = 1;
    }
}
for (k = 0; k < N; k++) {     --> T(n) = (N-1), S(n) = 0;
    b = b + k;                --> T(n) = 1, S(n) = 1;
}

=> total running time = 1 + (N-1) + N(N-1) + (N-1) + 1
                      = 1 + 1 + 2N - 2 + N^2 - N
                      = N^2 + N
=> Time complexity = O(N * N).

similarly,
total space = 1 + 1 + 1
            = 3
=> Space Complexity = O(1).
*/